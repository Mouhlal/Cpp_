#include <iostream> 
using namespace std ;

class point {
     int x ;
     int y ;
     public :
     void initialise (int A , int b){
       x = A;
       y = b;
    }   
    void Deplace(int d , int o){
        x = x+d;
        y = y+o;
    }
    void Affiche(){
        cout << "Le poit dans la position courante est :" << x << endl << y << endl ;
    }
};

//ex 2

void scene(){
        point u ;
        u.initialise(0,0);
        u.Affiche();
        u.Deplace(3,7);
        u.Affiche();
    }

int main()
{
    scene(); // fonction prototype

     point C ;
    C.initialise(0,0) ; // fct membre de class
    C.Affiche();
    C.Deplace(2,6);
    C.Affiche(); 
    return 0 ;
}

