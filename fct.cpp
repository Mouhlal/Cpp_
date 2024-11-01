#include <iostream> 
using namespace std;


int add(int t[] ,int taille){
   for(int i = 0;i<taille;i++){
    cout << "tab["<< i << "] :";
    cin >> t[i];
   }
}

int show(int t[] , int taille){
    for(int i = 0;i<taille;i++){
        cout << "tab["<< i << "] = " << t[i] << endl;
        }
}

int main()
{
    int t1[5] , t2[3] , y[6] ;

    add(t1,5);
    show(t1,5);

    cout << endl ;

    add(t2,3);
    show(t2,3);

   /*  int tab[5];

    for(int i = 0 ; i<5;i++){
        cout << "Enter a number for tab[" << i << "] : ";
        cin >> tab[i];
    }
    cout << endl ; */

   /*  struct   Person {
        int age;
        string name;
        };

        Person p1;
        p1.age ;
        p1.name ;
        cin >> p1.age ;
        cin >> p1.name ;
        cout << "Name: " << p1.name << endl;
        cout << "Age: " << p1.age << endl;
    
 */
    return 0;
}
