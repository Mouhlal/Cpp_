#include <iostream>
using namespace std ;

class Etudiant{
    int matricule ;
    string nom ;
    int nbrNotes ;
    double * notes ;
    static int countM ;
    public :

// constructeur par default
     Etudiant() :
        matricule(countM++) , nom("") , nbrNotes(0) 
        {
            this->notes = new double[nbrNotes] ;
            for(int i = 0 ; i < nbrNotes ; i++)
        {
            this->notes[i] = 0;
        }
        }

//constructeur par parametres
     Etudiant(string nom , int nbrNotes , double * notes){
        this->matricule = countM++ ;
        this->nom = nom ;
        this->nbrNotes = nbrNotes ;
        this->notes = new double[nbrNotes] ;
        }; 
    
    // destructeur
   ~Etudiant(){
    delete[] notes ;
    }

// constructeur de copie 
    Etudiant(const Etudiant &E){
        this->matricule = countM++ ;
        this->nom = E.nom ;
        this->nbrNotes = E.nbrNotes ;
        this->notes = new double[E.nbrNotes] ;
        for(int i = 0 ; i < E.nbrNotes ; i++)
        {
            this->notes[i] = E.notes[i] ;
            }
            };

    
    // getters et setters

    int getMatricule(){
        return matricule ;
    };
     string getNom(){
        return nom ;
    }; 
    int getNbrNotes(){
        return nbrNotes ;
    }
    double * getNotes(){
        return notes ;
    }
    void setMatricule(int matricule){
        this->matricule = matricule ;
    }
    void setNom(string nom){
        this->nom = nom ;
    }
    void setNbrNotes(int nbrNotes){
        this->nbrNotes = nbrNotes ;
    }
    void setNotes(double * notes){
        this->notes = notes ;
        }
    
    void saisie(){
        cout << "Saisir Les notes de l'etudiants " << endl ;
        for(int i = 0 ; i < nbrNotes ; i++)
        {
            cout << "Note " << i+1 << " : " ;
            cin >> notes[i] ;
            }
    }

    void affichage(){
        cout << "Matricule : " << matricule << endl ;
        cout << "Nom : " << nom << endl ;
        cout << "Nombre de notes : " << nbrNotes << endl ;
        cout << "Notes : " ;
        for(int i = 0 ; i<nbrNotes ;i++){
            cout << notes[i] << " " ;
            cout <<endl ;
        }
    }
 
    
};



int main ()
{
    Etudiant E1 ;
    E1.setMatricule(1) ;
    E1.setNom("Akram") ;
    E1.setNbrNotes(3) ;
   /*  E1.setNotes(new double[3] { 15.5 , 18.5 , 12,25 } ) ; */
    E1.saisie() ;
    E1.affichage() ;

    return 0 ;
}