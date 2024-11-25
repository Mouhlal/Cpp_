#include <iostream>
using namespace std ;

int post(string t[],int taille){
    for(int i=0;i<taille;i++){
        cout << "Le tab["<<i<<"] :" ;
        cin >> t[i]  ;
    }
}

int show(string t[],int taille){
    for(int i=0;i<taille;i++){
        cout << "Le tab["<<i<<"] est : " << t[i] << endl ;
        }
}

int main()
{
    string colors[3] , fruits[2] ;
    post(colors,3);
    post(fruits,2);
    show(colors,3);
    show(fruits,2);


    return 0 ;
}
