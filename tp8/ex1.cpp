#include <iostream>
using namespace std;


class Vehicule{
    protected :
    int vitesseMax , capaciteReservoir ;

    public : 
    Vehicule() : vitesseMax(0), capaciteReservoir(0){};
    Vehicule(int vitesse , int capacite) : vitesseMax(vitesse) , capaciteReservoir(capacite) {};

    void Afficher() const {
        cout << "Vitesse Max : " << vitesseMax << endl;
        cout << "Capacite Reservoir : " << capaciteReservoir << endl;
    }
};

class Voiture : public Vehicule{
    int nbPortes ;
    public :
    Voiture() :Vehicule(), nbPortes(0){};
    Voiture(int nbrportes , int v , int c) : nbPortes(nbrportes) , Vehicule(v,c) {};
    void Afficher() const {
        Vehicule::Afficher();
        cout << "Nombre de portes : " << nbPortes << endl;
    }
};

class Moto : public Vehicule {
    string typeMoto ;
    public :
    Moto() : typeMoto(""){};
    void Afficher() const {
        Vehicule::Afficher();
        cout << "Type de moto : " << typeMoto << endl;
    }
    
};


int main(){
    Vehicule v1;
    Voiture v2(4, 200, 60);
    Moto v3;
    v1.Afficher();
    v2.Afficher();
    v3.Afficher();
    return 0;
    
}

