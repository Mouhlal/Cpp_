#include <iostream>
using namespace std ;
#include <vector> 

class Livre{
    string titre , auteur ;
    int année_publication ;
    public:  
    Livre(string titre , string auteur , int année){
        this->titre = titre ;
        this->auteur = auteur ;
        this->année_publication = année ;
    }
    void afficher(){
        cout << "Titre " << titre << " Son auteur est " << auteur << " son année de publication est " << année_publication << endl ;
    }
};
 class Bilbiotheque{
    vector<Livre> livre ;
    public :
    void AjouterLivre(Livre l){
        livre.push_back(l) ;
    }
    // friend void AfficherLivres()
    void AfficherLivres(){
        for(int i = 0;i<livre.size();i++){
            livre[i].afficher() ;
        }
    }
 };




int main ()
{
    Livre l1("Antigone","Akram Mouhlal ",2024);
    Livre l2("Les Miserables","Victor Hugo",1862);
    Bilbiotheque bibliotheque ;
    bibliotheque.AjouterLivre(l1);
    bibliotheque.AjouterLivre(l2);
    bibliotheque.AfficherLivres();

    return 0 ;

}