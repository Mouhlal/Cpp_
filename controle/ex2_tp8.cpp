#include <iostream> 
using namespace std; 

class Personne{
    protected: 
    string nom;
    int age; 
    public:  
    Personne(string n,int a) : nom(n) , age(a) {} ;
    void Afficher(){
        cout << "Nom :" << nom << "Age est :" << age << endl ; 
    };
};
class Etudiant :public Personne{
    string niveau ;
    public:  
    Etudiant(string nv , string nom , int age) :Personne(nom,age) , niveau(nv) {};
    void Afficher(){
        Personne::Afficher();
        cout << "Niveau : " << niveau << endl;
    }
};
class Professeur :public Personne{
    string matiere;
    public:  
    Professeur(string mat, string nom, int ag) :Personne(nom,ag) , matiere(mat) {} ;
    Professeur(const Professeur& prof) :Personne(prof) , matiere(prof.matiere) {} ;
    void Afficher(){
        Personne::Afficher();
        cout << "Matiere : " << matiere << endl;
        
    }
};


int main()
{
    Personne P1("Akram Mouhlal",20) ;
    P1.Afficher();
    cout << endl;
    Etudiant E1("Premier", "Ahmed", 25) ;
    E1.Afficher();
    cout << endl;
    Professeur P2("React Js", "Akram", 20) ;
    P2.Afficher();
    return 0;
}