#include <iostream>
using namespace std;

class Vehicule{
    protected:
        int vitesseMaximale , capaciteReservoir ;
    public: 
    Vehicule(): vitesseMaximale(0) , capaciteReservoir(0) {} ;
    Vehicule(int v , int c): vitesseMaximale(v) , capaciteReservoir(c) {};
    Vehicule(const Vehicule& veh): vitesseMaximale(veh.vitesseMaximale) , capaciteReservoir(veh.capaciteReservoir) {};
    void Afficher(){
        cout << "Vitesse Maximale est :" << vitesseMaximale <<endl;
        cout << "Capacite Reservoir est :" << capaciteReservoir <<endl;
    }

};
/* Vehicule::Vehicule(): vitesseMaximale(0) , capaciteReservoir(0) {} ;
Vehicule::Vehicule(int v , int c): vitesseMaximale(v) , capaciteReservoir(c) {};
Vehicule::Vehicule(const Vehicule& veh): vitesseMaximale(veh.vitesseMaximale) , capaciteReservoir(veh.capaciteReservoir) {};
*/

class Voiture :public Vehicule{
    int nombrePortes ;
    public: 
    Voiture(): nombrePortes(0) {};
    Voiture(int v , int c , int n): Vehicule(v,c) , nombrePortes(n) {};
    Voiture(const Voiture& veh): Vehicule(veh) , nombrePortes(veh.nombrePortes) {};

    void Afficher(){
        Vehicule::Afficher();
        cout << "Nombre Portes" << nombrePortes << endl ;
    };
};

class Moto :public Vehicule{
    string TypeDeMoteur ;
    public: 
    Moto(): TypeDeMoteur("") {};
    Moto(string type , int v , int c) :Vehicule(v,c) , TypeDeMoteur(type) {} ;
    Moto(const Moto& moto) :Vehicule(moto) , TypeDeMoteur(moto.TypeDeMoteur) {} ;
    void Afficher(){
        Vehicule::Afficher();
        cout << "Type De Moteur :" << TypeDeMoteur << endl ;
    }
};


int main()
{
    Vehicule v1 ;
    v1.Afficher();
    Vehicule v2(100,50);
    v2.Afficher();
    Vehicule v3(v2);
    v3.Afficher();
    cout << endl;
    
    Voiture v4(120,60,4);
    v4.Afficher();
    Moto m1("Moteur Diesel",150,70);
    m1.Afficher();
    cout << endl;
    
    Voiture v5(v4);
    v5.Afficher();
    Moto m2(m1);
    m2.Afficher();

    
    return 0;
}