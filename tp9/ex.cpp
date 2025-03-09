#include <iostream>
using namespace std;
#include <vector>

class Employe{
    protected:
    int matricule;
    static int id;
    string nom ;
    float salaire ;
    int age;
    public:
   Employe(int matricule , string nom , float salaire , int age) : matricule(matricule) , nom(nom) , salaire(salaire) , age(age) {};
   /* Employe(int matricule , string nom , float salaire , int age);
   Employe();
   Employe(const Employe& E); */


    void ToString(){
        cout << "Matricule : " << matricule << endl ;
        cout << "Nom : " << nom << endl ;
        cout << "Salaire : " << salaire << endl ;
        cout << "Age : " << age << endl ;
        cout <<endl ;
    };
    virtual float GetSalaire(){
        return salaire;
    };

    float setSalaire(float s){
        salaire = s;
    };
    void AfficherS(){
        cout << "Salaire : " << salaire << endl ;
    };
    int getAge(){
        return age ;
    };
    void  setAge(int a){
        age = a;
    };
    void AfficherA(){
        cout << "Age : " << age << endl ;
    };
};

/* Employe::Employe(int matricule , string nom , float salaire , int age) : matricule(id++) , nom(nom) , salaire(salaire) , age(age) {};
Employe::Employe() : matricule(0) , nom("akram") , salaire(25000) , age(20) {};
Employe::Employe(const Employe& E) : matricule(E.matricule) , nom(E.nom) , salaire(E.salaire) , age(E.age) {}; */

class Adherent :public Employe{
    int dateAdhesion;
    float montant ;
    public :
    Adherent(int d , float m,int mt , string n , float s , int a) : Employe(m, n,s,a){
        dateAdhesion = d;
        montant = m;
    };
  
    float getMontant(){
        return montant;
    };
    void setMontant(float m){
        montant = m;
    };
    float GetSalaire() override{
        return salaire - montant;
    };
    void AfficherS(){
        cout << "Salaire : " << salaire - montant << endl ;
    }; 
};


class Manager :public Employe{
    vector<Employe> employe;
    public:
    Manager(int m , string n , float s , int a) : Employe(m,n,s,a){};
    void AjouterEmploye(Employe e){
        employe.push_back(e);
    }
    void AfficherEquipe(){
        for(int i = 0 ; i < employe.size() ; i++){
            employe[i].ToString();
        }
    }
    float SalaireTotal(){
        float total = 0;
        for (int i = 0; i<employe.size(); i++){
            total += employe[i].GetSalaire();
        }
        return total;
    }
};

class Departement{
    vector<Manager> manager;
    string nom ;
    public:
    Departement(string n){
        nom = n;
    }
    void AjouterMembre(Manager m){
        manager.push_back(m);
    }
    void AfficherMembre(){
        for (int i = 0; i < manager.size(); i++){
            manager[i].ToString();
        }
    }
    float SalaireTotal(){
        float total = 0;
        for (int i = 0; i < manager.size(); i++){
            total += manager[i].SalaireTotal();
        }
        return total;
    }
};

int main()
{
    Employe e1(1,"e1",1000,20);
    Employe e2(2,"e2",2000,30); 
    e1.setSalaire(1000);
    e1.setAge(20);
    e2.setSalaire(2000);
    e2.setAge(30);
    e1.ToString();
    e2.ToString();
    Adherent a1(1,1000,3,"a1",3000,40);
    a1.setSalaire(3000);
    a1.setAge(40);
    a1.setMontant(1000);
    Manager m1(3,"m1",4000,50);
    m1.AjouterEmploye(e1);
    m1.AjouterEmploye(e2);
    m1.AjouterEmploye(a1);
    m1.AfficherEquipe();
    Departement d1("d1");
    d1.AjouterMembre(m1);
    cout << "Salaire total : " << d1.SalaireTotal() << endl;
    return 0;
}
