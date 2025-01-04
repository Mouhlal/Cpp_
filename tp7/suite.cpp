#include <iostream> 
using namespace std ;

class Concert{
    string nom ;
    string date ;
    int heureDebut ;
    int duree ;
    static int totalConcerts ;
    public: 
    Concert(string nom , string date , int heured , int duree){
        this->nom = nom ;
        this->date = date ;
        this->heureDebut = heured ;
        this->duree = duree ;
        totalConcerts++ ;
    }
};


int main()
{
    return 0;
}