#include <iostream> 
using namespace std ;
#include <vector>


class Article{
    string nom ;
    double prix ;
    int quantite ;
};

class Magasin{
    vector<Article> article ;
    public :   
    void ajouterArticle(Article a){
        article.push_back(a) ;
    }
    void supprimerArticle(int id){
        article.erase(article.begin()+id) ;
    }
    void majArticle(
        int id,
        string nom,
        double prix,
        int quantite
        ){
            article[id].nom = nom ;
            article[id].prix = prix ;
            article[id].quantite = quantite ;
        }
        
};

int main()
{

}