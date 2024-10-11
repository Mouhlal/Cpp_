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

    const int minutesPerHour = 60;
    const double PI = 3.14;  
    // PI = 2.5; Erreur because it's a constant cannot change


   /*  if(b >= c){
        std::cout << PI ;
    }
    else{
        std::cout << minutesPerHour ;
    }
  */
    return 0 ;

}
