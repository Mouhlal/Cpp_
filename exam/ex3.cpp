#include <iostream>
using namespace std;

class Ouvrage{
    protected:
    int isbn ;
    string titre ;
    int nbrpages ;
    bool bestseller ;
    public:  
    Ouvrage(int id , string tit , int nbr , bool best);
    virtual float prix_impression();
    friend ostream& operator<<(ostream& o ,Ouvrage& Ou);
    friend bool operator<(Ouvrage& O1 , Ouvrage& O2);
};

Ouvrage::Ouvrage(int id , string tit , int nbr , bool best) : isbn(id) , titre(tit) , nbrpages(nbr) , bestseller(best) {} 
float Ouvrage::prix_impression(){
    return nbrpages * 0.3 + (bestseller ? 20 : 0) ;
}

ostream& operator<<(ostream& o , Ouvrage& Ou){
    o << "ISBN : " << Ou.isbn << endl;
    o << "Titre : " << Ou.titre << endl;
    o << "Nbr de pages : " << Ou.nbrpages << endl;
    o << "Best seller : " << Ou.bestseller << endl;
    return o;
}
bool operator<(Ouvrage& O1 , Ouvrage& O2){
    return O1.nbrpages < O2.nbrpages;
}

class Roman :public Ouvrage{
    string type ;
    public:   
    //Roman(string type , int isbn , string titre , int nbr , bool best ) : Ouvrage(isbn,titre,nbr,best) , type(type) {}
    Roman(string type , int isbn , string titre , int nbr , bool best );
    float prix_impression() override;
    friend ostream& operator<<(ostream& o ,Roman& Ou);
    void afficher(Ouvrage * tab[] , int n);

};

Roman::Roman(string type , int isbn , string titre , int nbr , bool best ) : Ouvrage(isbn,titre,nbr,best) , type(type) {} 
float Roman::prix_impression(){
    return nbrpages * 0.3 + (bestseller ? 20 : 0) + 10 ;
}
ostream& operator<<(ostream& o , Roman& Ou){
    o << "ISBN : " << Ou.isbn << endl;
    o << "Titre : " << Ou.titre << endl;
    o << "Nbr de pages : " << Ou.nbrpages << endl;
    o << "Best seller : " << Ou.bestseller << endl;
    o << "Type : " << Ou.type << endl;
    return o;
}
void Roman::afficher(Ouvrage * tab[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout << *tab[i] << endl;
    }
}

int main(){
    Ouvrage * tab[] = {new Ouvrage(1,"livre1",100,true) , new Roman("type1",2,"livre2",200,false)};
    Roman R("type2",3,"livre3",300,true);
    R.afficher(tab,2);
    return 0;
}