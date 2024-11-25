#include <iostream> 
using namespace std ;

void saisir(int t[] , int a ){
    for (int i = 0 ; i < a ; i++){
        cout << "["<<i<<"] :" << endl ;
        cin >> t[i] ;
    }
}

int affiche(int t[],int a){
    for(int i = 0 ; i<a ;i++){
        cout << "Tableau ["<<i<<"] = "<<t[i]<<endl ;
    }
    return 0 ;
}

int main()
{
    int t[6] ;
    saisir(t,3);
    affiche(t,3) ;
    return 0 ;
}