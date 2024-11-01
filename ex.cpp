#include <iostream>
using namespace std ;

int main(){
    std::cout << "==============Exercice 1 ===============" ;
 
    string phrase ;
    cout << "Taper votre chaine" << endl ;
    cin >> phrase ;
    cout << "Votre chaine est : " << phrase << endl ;

    cout << phrase.length() << endl ;

   string phraseMaj = phrase;
    for (int i = 0; i < phraseMaj.length(); i++) {
        phraseMaj[i] = toupper(phraseMaj[i]);
    }
    cout << "La phrase en majuscules est: " << phraseMaj << endl;

    

    return 0 ;
}