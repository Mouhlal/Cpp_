#include <iostream> 
using namespace std ;

void echange(double a , double b){
    cout << "Taper les valeurs de a et b " << endl ;
    cin >> a >> b ;

}

int main()
{
    echange(0.5,0.4);
    cout << "Apres" << endl ;
    double a = 0.0 ;
    double b = 0.0 ;
    
    cout << a << endl << b << endl ;
   
    return 0 ;
}
