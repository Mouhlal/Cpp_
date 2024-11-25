#include <iostream>
using namespace std;

void saisir(int tab[], int nn) {
    for (int i = 0; i < nn; i++) {
        cout << "Donner la note t[" << i << "] : ";
        cin >> tab[i];
    }
}

void show(int tab[], int nn) {
    for (int i = 0; i < nn; i++) {
        cout << "Note t[" << i << "] = " << tab[i] << endl;
    }
}

double moyenne(int tab[], int nn) {
    int somme = 0;
    for (int i = 0; i < nn; i++) {
        somme += tab[i];
    }
    return static_cast<double>(somme) / nn; 

}

int main() {
    const int taille = 6; 
    int tab[taille];

    saisir(tab, taille);

    show(tab, taille);

    cout << "La moyenne est : " << moyenne(tab, taille) << endl;

    return 0;
}
