#include <iostream>
using namespace std;

class Produit{
    int idProduit ;
    static int id ;
    string nom ;
    double prix ;
    int qte ;
    public : 
    Produit(){
        idProduit = id++ ;
        nom = "Akram";
        prix = 0 ;
        qte = 0 ;
    }
    Produit( string nom , double prix , int qte ) {
        idProduit = id++ ;
        this->nom = nom ;
        this->prix = prix ;
        this->qte = qte ;
    }
    Produit(const Produit &Pr) {
        idProduit = id++;
        this->nom = Pr.nom ;
        this->prix = Pr.prix ;
        this->qte = Pr.qte ;
    }
    ~Produit() {
        cout << "Destruction de l'objet " << idProduit << endl ;
    }
    void AfficherDetails(){
        cout << "id :" << idProduit << endl;
        cout << "nom :" << nom << endl;
        cout << "Prix Unitaire :" << prix << endl;
        cout << "Quantité :" << qte << endl;
    }
};


int main()
{
    Produit p1 ;
    p1.AfficherDetails() ;
    Produit p2("Coca", 5.5, 10) ;
    p2.AfficherDetails() ;
    Produit p3(p2) ;
    p3.AfficherDetails() ;
    return 0;
}