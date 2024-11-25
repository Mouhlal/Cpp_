#include <iostream> 
using namespace std ;
#include <vector>
#include <string>
class Etudiant{
    string nom ;
    int numero;
    int age ;

    public:
    Etudiant(string nom , int numero , int age){
       this->nom = nom ;
       this->numero = numero ;
       this->age = age ;
    }

    void afficher(){
        cout << "Nom " << nom << " Son Numero est " << numero << " son age est " << age << endl ;
    }
    void mettreAjourAge(int age ){
        this->age = age ;
    }


};

class Cours{
    string nomCours ;
    vector<Etudiant> etudiant ;

    public : 
    Cours(string nomCours){
        this->nomCours = nomCours;
    }

    void afficher(){
        for(int i = 0;i<etudiant.size();i++){
            etudiant[i].afficher();
        }
        cout << "Le cours " << nomCours << endl ;
    }

    void AjouterEtudiant(Etudiant e){
        etudiant.push_back(e);
    }

    void MettreAjour(int index , string nom , int age , int numero){
        etudiant[index] = Etudiant(nom,age,numero) ;
    }
};

int main()
{
    Etudiant E1("Akram",37,20) ;
    Etudiant E2("Mouhlal",37,20) ;

    Cours C("math") ;
    E1.afficher() ;
    E1.mettreAjourAge(23);
    E1.afficher();

    C.afficher() ;
    C.AjouterEtudiant(E2);
    C.afficher();
    C.MettreAjour(0,"Pato",23,20);
    C.afficher();

    return 0 ;

}