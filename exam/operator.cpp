#include <iostream> 
using namespace std ;

class Produit{
    protected:
    int idProduit ;
    static int id ;
    string nom ;
    float prix ;
    int quantite ;
    public:   
    Produit() : idProduit(id++) , nom("inconnu"), prix(0), quantite(0) {}
    Produit(const Produit& P) : idProduit(id++) , nom(P.nom), prix(P.prix), quantite(P.quantite) {}
    ~Produit(){
        cout << "Produit detruit" << endl;
    }
    void afficher(){
        cout << "Id: " << idProduit << endl;
        cout << "Nom: " << nom << endl;
        cout << "Prix: " << prix << endl;
        cout << "Quantite: " << quantite << endl;
    }
    friend istream& operator>>(istream& cin , Produit& P){
        cout << "Nom: ";
        cin >> P.nom;
        cout << "Prix: ";
        cin >> P.prix;
        cout << "Quantite: ";
        cin >> P.quantite;
        return cin; 
    }
    friend ostream& operator<<(ostream& cout , Produit& P){
        cout << "Id: " << P.idProduit << endl;
        cout << "Nom: " << P.nom << endl;
        cout << "Prix: " << P.prix << endl;
        cout << "Quantite: " << P.quantite << endl;
        return cout;
    }
    friend bool operator==(Produit& P1 , Produit& P2){
        return P1.nom == P2.nom && P1.prix == P2.prix && P1.quantite == P2.quantite;
    }
    friend Produit operator+=(Produit& P1 , Produit& P2){
        P1.quantite += P2.quantite;
        return P1;
    }
    friend Produit operator-=(Produit& P1 , Produit& P2){
        P1.quantite -= P2.quantite ;
        return P1;
    }
};

int main(){
    return 0 ;
}