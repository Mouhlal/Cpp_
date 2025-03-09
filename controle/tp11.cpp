#include <iostream>
#include <string>
using namespace std;

class Produits {
protected:
    int idProduit;
    static int autoID;
    string nom;
    float prix;
    int qte;

public:
    // Constructeur par défaut
    Produits() : idProduit(1), nom("Akram"), prix(0.00), qte(10) {}

    // Constructeur paramétré
    Produits(string nom, float prix, int q) : idProduit(autoID++), nom(nom), prix(prix), qte(q) {}

    // Constructeur par copie
    Produits(const Produits& pr) : idProduit(autoID++), nom(pr.nom), prix(pr.prix), qte(pr.qte) {}

    // Destructeur
    ~Produits() {
        cout << "Destructeur appelé pour le produit ID : " << idProduit << endl;
    }

    // Méthode d'affichage
    void Afficher() const {
        cout << "ID : " << idProduit << endl;
        cout << "Nom : " << nom << endl;
        cout << "Prix : " << prix << endl;
        cout << "Quantité : " << qte << endl;
    }

    // Surcharge des opérateurs d'entrée et de sortie
    friend istream& operator>>(istream& i, Produits& pr);
    friend ostream& operator<<(ostream& o, const Produits& pr);

    // Surcharge de l'opérateur +=
    friend Produits& operator+=(Produits& F1, const Produits& F2) {
        F1.qte += F2.qte;
        return F1;
    }

    // Surcharge de l'opérateur -=
    friend Produits& operator-=(Produits& F1, const Produits& F2) {
        if (F2.qte <= F1.qte) {
            F1.qte -= F2.qte;
        } else {
            cout << "Quantité insuffisante" << endl;
        }
        return F1;
    }

    // Surcharge de l'opérateur +
    friend Produits operator+(const Produits& F1, const Produits& F2) {
        Produits resultat = F1;
        resultat.qte += F2.qte;
        return resultat;
    }
};

// Initialisation de la variable statique
int Produits::autoID = 1;

// Définition des opérateurs d'entrée et de sortie
istream& operator>>(istream& i, Produits& pr) {
    cout << "Entrez le nom : ";
    i >> pr.nom;
    cout << "Entrez le prix : ";
    i >> pr.prix;
    cout << "Entrez la quantité : ";
    i >> pr.qte;
    return i;
}

ostream& operator<<(ostream& o, const Produits& pr) {
    o << "ID : " << pr.idProduit << endl;
    o << "Nom : " << pr.nom << endl;
    o << "Prix : " << pr.prix << endl;
    o << "Quantité : " << pr.qte << endl;
    return o;
}

// Classe dérivée ProduitsElec
class ProduitsElec : public Produits {
    int garantie;          // Durée de la garantie en années
    string consommation;   // Niveau de consommation électrique

public:
    // Constructeur par défaut
    ProduitsElec() : garantie(1), consommation("Faible") {}

    // Constructeur paramétré
    ProduitsElec(string cons, int gar, string nom, float prix, int q) 
    : Produits(nom, prix, q), garantie(gar), consommation(cons) {}

    // Constructeur par copie
    ProduitsElec(const ProduitsElec& pel)
        : Produits(pel), garantie(pel.garantie), consommation(pel.consommation) {}

    // Méthode d'affichage
    void Afficher() const {
        Produits::Afficher();
        cout << "Garantie : " << garantie << " an(s)" << endl;
        cout << "Consommation : " << consommation << endl;
    }

    // Méthode pour vérifier si le produit est sous garantie
    bool estSousGarantie() const {
        return garantie > 0;
    }
};

// Fonction principale
int main() {
    // Produit par défaut
    Produits Pr;
    Pr.Afficher();

    // Produit paramétré
    Produits Pr1("Zakaria", 20.5, 100);
    Pr1.Afficher();

    // Produit par copie
    Produits Pr2(Pr1);
    Pr2.Afficher();

    // Produit électronique par défaut
    ProduitsElec Pe;
    Pe.Afficher();
    cout << endl;

    // Produit électronique paramétré
    ProduitsElec Pe1("Moyenne", 2, "Frigo", 1500.0, 5);
    Pe1.Afficher();
    cout << endl;

    // Produit électronique par copie
    ProduitsElec Pe2(Pe1);
    Pe2.Afficher();

    // Test des opérateurs
    Produits P1("Produit1", 10.0, 50);
    Produits P2("Produit2", 15.0, 30);

    Produits P3 = P1 + P2;  // Fusion des stocks
    cout << "\nProduit fusionné :\n" << P3;

    P1 += P2;  // Ajout des quantités
    cout << "\nProduit après += :\n" << P1;

    P1 -= P2;  // Réduction des quantités
    cout << "\nProduit après -= :\n" << P1;

    return 0;
}
