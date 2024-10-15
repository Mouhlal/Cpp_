#include <iostream>
using namespace std ;

int main()
{

    std::cout << "================Calculator ============== " ;
    int n1 ;
    cout << "First Number "<< endl << endl ;
    cin >> n1 ;
    int n2 ;
    cout << "Second Number " << endl << endl ;
    cin >> n2 ;

    char choix ;
    cout << "Taper votre choix : + , - , * , / " << endl << endl ;
    cin >> choix ;

    int res ;

    switch (choix)
    {
    case '+' :
        res =  n1 + n2 ;
        cout << "Result is :" << res << endl ;
        break;
    case '-':
        res =  n1 - n2 ;
        cout << "Result is :" << res << endl ;
        break;
    case '*':
        res = n1 * n2 ;
        cout << "Result is :" << res  << endl;
        break;
     case '/':
     if (n2 != 0)
     {
        res = n1 / n2 ;
        cout << "Result is :" << res << endl ;
        }
        else
        {
            cout << "Error : Division by zero " << endl ;
            }
        break;
    
    default:
        break;
    }
    
    return 0 ;

}