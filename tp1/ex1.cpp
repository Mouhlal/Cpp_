#include <iostream> 
using namespace std ;


float b (double x , double y ){
    float m ;
    m = x+y ;
    return m ;
}

int main()
{
   cout << "Le moyen de m est :" << b(3.5,4.2)<<endl;
    return 0 ;
}

