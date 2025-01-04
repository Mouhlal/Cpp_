#include <iostream>
#include <string>
using namespace std;

class Etudiant {
    int matricule;
    static int autoincr;
    string nom;
    int nbrNotes;
    double* tabNotes;

public:
    // Constructeur par défaut
    Etudiant() : matricule(autoincr++), nom("Akram"), nbrNotes(0), tabNotes(nullptr) {}

    // Constructeur paramétré
    Etudiant(string nom, int nbrNotes, double* notes)
        : matricule(autoincr++), nom(nom), nbrNotes(nbrNotes) {
        tabNotes = new double[nbrNotes];
        for (int i = 0; i < nbrNotes; i++) {
            tabNotes[i] = notes[i];
        }
    }

    // Constructeur par copie
    Etudiant(const Etudiant& E)
        : matricule(autoincr++), nom(E.nom), nbrNotes(E.nbrNotes) {
        tabNotes = new double[nbrNotes];
        for (int i = 0; i < nbrNotes; i++) {
            tabNotes[i] = E.tabNotes[i];
        }
    }

    // Destructeur
    ~Etudiant() {
        delete[] tabNotes;
    }

    // Accesseurs
    int getMatricule() const { return matricule; }
    string getNom() const { return nom; }
    int getNbrNotes() const { return nbrNotes; }
    double* getTabNotes() const { return tabNotes; }

    // Mutateurs
    void setNom(const string& nom) { this->nom = nom; }
    void setNbrNotes(int nbrNotes) {
        if (this->nbrNotes != nbrNotes) {
            delete[] tabNotes;
            this->nbrNotes = nbrNotes;
            tabNotes = new double[nbrNotes];
        }
    }
    void setTabNotes(const double* notes) {
        for (int i = 0; i < nbrNotes; i++) {
            tabNotes[i] = notes[i];
        }
    }

    // Méthodes
    void Saisir() {
        cout << "Saisir le nom de l'étudiant : ";
        cin >> nom;
        cout << "Saisir le nombre de notes : ";
        cin >> nbrNotes;

        delete[] tabNotes; // Libération de l'ancien tableau
        tabNotes = new double[nbrNotes];
        for (int i = 0; i < nbrNotes; i++) {
            cout << "Saisir la note " << i + 1 << ": ";
            cin >> tabNotes[i];
        }
    }

    void Afficher() const {
        cout << "Matricule : " << matricule << "\nNom : " << nom
             << "\nNombre de notes : " << nbrNotes << "\nNotes : ";
        for (int i = 0; i < nbrNotes; i++) {
            cout << tabNotes[i] << " ";
        }
        cout << endl;
    }

    double moyenne() const {
        if (nbrNotes == 0) return 0.0;
        double somme = 0;
        for (int i = 0; i < nbrNotes; i++) {
            somme += tabNotes[i];
        }
        return somme / nbrNotes;
    }
};

// Initialisation de l'attribut statique
int Etudiant::autoincr = 1;

int main() {
    // Étudiant par défaut
    Etudiant E1;
    E1.Saisir();
    E1.Afficher();
    cout << "La moyenne est : " << E1.moyenne() << endl;

    // Étudiant avec constructeur paramétré
    double notes[] = {12.5, 14.0, 16.0};
    Etudiant E2("Mehdi", 3, notes);
    E2.Afficher();
    cout << "La moyenne est : " << E2.moyenne() << endl;

    // Étudiant avec constructeur par copie
    Etudiant E3(E2);
    E3.setNom("Khalid");
    E3.Afficher();
    cout << "La moyenne est : " << E3.moyenne() << endl;

    return 0;
}
