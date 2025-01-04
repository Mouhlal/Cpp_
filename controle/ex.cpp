#include <iostream>
using namespace std ;

class Facture{
    int numFacture ;
    double montantFacture ;

    public :
        Facture();
        Facture(const Facture& F);
        double getMontantFacture();
        void setMontantFacture(double montant);
        friend Facture operator+(Facture F1 , Facture F2);
        friend istream& operator>>(istream& in, Facture& F);
        friend ostream& operator<<(ostream& on , Facture& F);
        friend bool operator==(Facture F1 , Facture F2);
        friend bool operator!=(Facture F1 , Facture F2);
        friend Facture operator-(Facture F1 , Facture F2);
        friend float operator*(Facture F1 , Facture F2);
};

Facture::Facture(): numFacture(0) , montantFacture(0.0) {}
Facture::Facture(const Facture& F): numFacture(F.numFacture) , montantFacture(F.montantFacture) {}

double Facture::getMontantFacture(){
    return montantFacture ;
};
void Facture::setMontantFacture(double montant){
    montantFacture = montant ;
}
Facture operator+(Facture F1 , Facture F2){
    Facture F ;
    F.montantFacture =  F1.montantFacture + F2.montantFacture ;
    return F;
}

bool operator==(Facture F1 , Facture F2){
    if(F1.montantFacture == F2.montantFacture)
    return true ;
    else
    return false ;
}

bool operator!=(Facture F1 , Facture F2){
    if(F1.montantFacture != F2.montantFacture)
    return true ;
    else
    return false ;
}
Facture operator-(Facture F1 , Facture F2){
    Facture F ;
    F.montantFacture = F1.montantFacture - F2.montantFacture ;
    return F ;
}


istream& operator>>(istream& in , Facture& F){
    in >> F.numFacture >> F.montantFacture ;
    return in ;
}
ostream& operator<<(ostream& on , Facture& F){
    on << "Num Facture : " << F.numFacture << endl ;
    on << "Montant Facture : " << F.montantFacture << endl ;
    return on ;
}


int main()
{
    Facture F1 , F2 , F3 ;
    cout << "Entrez le numero de facture 1 : " ;
    cin >> F1 ;
    cout << "Entrez le montant de facture 1 : " ;
    cin >> F1 ;
    cout << "Entrez le numero de facture 2 : " ;
    cin >> F2 ;
    cout << "Entrez le montant de facture 2 : " ;
    cin >> F2 ;
    F3 = F1 + F2 ;
    cout << " le montant total est  : "<< F3 ;
    return 0;
}