#include <iostream>
using namespace std;
#include <vector>

class Employe{
    protected:
    int matricule , age ;
    string nom ;
    double salaire ;
    static int matrId ;

    public :  
    Employe(string nom , int age , double salaire) :nom(nom) , age(age) , salaire(salaire) {};

    void ToString(){
        cout << "Nom : " << nom << endl ;
        cout << "Age : " << age << endl ;
        cout << "Salaire : " << salaire << endl ;
    }
    virtual double getSalaire(){
        return salaire;
    }
    void setSalaire(double sl){
        salaire = sl ;
    }
    void AfficherSalaire(){
        cout << "Salaire : " << salaire << endl ;
    }
    int getAge(){
        return age; 
    }
    void setAge(int ag){
        age= ag;
    }
    void AfficherAge(){
        cout << "Age : " << age << endl ;
    }
};

class Adherent :public Employe{
    string date_adhesions ;
    float montant; 
    public :  
    
    Adherent(string date , string nom , int age , float salaire) :Employe(nom,age,salaire) {} ;

    float getMontant(){
        return montant;
    }
    void setMontant(float m){
        montant = m ;
    }
    double getSalaire() override {
        return salaire - montant ;
    }
    void AfficherS() {
        cout << "Salaire : " << salaire - montant << endl ;
    }
};

class Manager :public Employe{
    vector <Employe> employe ;
    public:
    Manager(string nom , int age , double salaire) :Employe(nom,age,salaire) {}
    void AjouterEmploye(Employe e){
        employe.push_back(e);
    }
    void AfficherEmploye(){
        for (int i = 0; i < employe.size(); i++) {
            cout << "Age : " << employe[i].getAge() << endl ;
            cout << "Salaire : " << employe[i].getSalaire() <<endl ;
        };
        };
};
int main()
{
    return 0;
}