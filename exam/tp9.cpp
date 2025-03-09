#include <iostream>
#include <vector>
using namespace std;

class Employe {
    protected:  
     int matricule ;
     static int id ;
     string nom ;
     float salaire ; 
     int age ;
     public:  
     Employe() : matricule(id++) , nom("inconnu"), salaire(0), age(0) {}
     Employe(int m ,  string n , float s , int a) : matricule(id++) , nom(n), salaire(s), age(a) {}
     Employe(const Employe &e) : matricule(id++) , nom(e.nom), salaire(e.salaire), age(e.age) {}

     void ToString(){
        cout << "Matricule: " << matricule << endl;
        cout << "Nom: " << nom << endl;
        cout << "Salaire: " << salaire << endl;
        cout << "Age: " << age << endl;
     }
     virtual float GetSalaire(){
        return salaire;
     }
     void setSalaire(float s){
        salaire = s;
     }
     void AfficherSalaire(){
        cout << "Salaire: " << salaire << endl;
     }
     int getAge(){
        return age ;
     }
     void setAge(int a ){
        age = a ;
     }
    void AfficherAge(){
        cout << "Age: " << age << endl;
    }
};

class Adherent :public Employe{
    string date ;
    float montant;
    public:
    Adherent() : Employe(), date("inconnu"), montant(0) {}
    Adherent(string d , float montant , int m , string nom , int age , float sal) : Employe(m,nom,age,sal) , date(d) , montant(montant) {} ;
    Adherent(const Adherent &a) : Employe(a) , date(a.date) , montant(a.montant) {}
    float getMontant(){
        return montant;
    }
    void setMontant(float m){
        montant = m;
    }
    float GetSalaire() override{
        return salaire - montant;
    }
    void AfficherSalaire(){
        cout << "Salaire: " << salaire - montant << endl;
    }
};

class Manager :public Employe{
    vector<Employe> employe;
    public:
    Manager() :Employe() {} ;
    void AjouterEmploye(Employe e){
        employe.push_back(e);
    }
    void AfficherEquipe(){
        for(int i=0; i<employe.size();i++){
            employe[i].ToString();
        }
    }
    float SalaireTotal(){
        float total = 0;
        for(int i=0;i<employe.size();i++){
            total +=employe[i].GetSalaire();
        }
        return total;
    }
};

int main(){
    Employe e1(1,"e1",1000,20);
    Employe e2(2,"e2",2000,30);
    e1.setSalaire(1000);
    e1.setAge(20);
    e2.setSalaire(2000);
    e2.setAge(30);
    e1.ToString();
    e2.ToString();
    return 0;
}