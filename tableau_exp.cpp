#include <iostream> 
using namespace std ;

void inserer(int tab[]){
    for(int i=0;i<=5;i++){
        cout<<"entrer le nombre "<<i<<" : ";
        cin >> tab[i] ;
    }
}
int show(int tab[]){
    for(int i=0;i<=5;i++){
        cout<<"le nombre "<<i<<" est : "<<tab[i]<<endl; 
    };
    return 0;
}
int main()
{
    int tab[6] ;
    inserer(tab) ;
    show(tab) ;
    return 0 ;
}

