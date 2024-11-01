#include <iostream> 
using namespace std;


int main()
{
    // Déclaration Du Variables ( int , string , double , char , bool )

    string myName = "Akram Mouhlal" ;
    int age = 20 ;
    string pays = "Morocco" ;

    std::cout << "My Name is " << myName << " I'am " << age << " y old ,I'm from " << pays << endl ;

    int n1 = 1937 ;
    int n2 = 2024 ; 

    int som ;
    som = n2-n1 ;

    // endl Pour retourner à la ligne (on a utilisée le dans le ligne rouge )
    // On peut aussi utiliser "\n" .
    // std::cout << endl ;


    std::cout << "The difference between " << n2 << " and " << n1 << " is " << som << "." << endl ;

    // Declaration du plusieurs variables en méme temps 
    int a = 5 , b =10 , c = 20 ;
    int somme = a+b+c ;

    std::cout << somme << endl ;

/////////////////////////////////////////////////////////////////////////////////////////////////////
 string x = "20" ;
 string y = "24" ; 
 string year = x+y; // 2024

 cout << year  << endl;

 string boy = "Zoro" ;
 cout << boy.length() << endl ;
 cout << boy[2] << endl ;

 cout << "Akram Mouhlal \"Fantastic\" player in fifa  " << endl ;
/* ----------------------------------------------------------------------------------------------------------- */

cout << max(24,33) << endl  ;
cout << min(122,42) << endl ;
    return 0 ;

}
