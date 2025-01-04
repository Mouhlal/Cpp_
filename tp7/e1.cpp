#include <iostream> 
using namespace std ;
#include <vector>

class Matrice {
    int L , C ;
    vector < vector < int > > M ;
    public :
    Matrice(){
        this->L = 0;
        this->C = 0;
        M.resize(L,vector<int>(C));
       /*  M.resize(L);
        for(int i =0;i<L;i++){
            M[i].resize(C);
        for(int j =0;j<C ;j++){
        M[i][j] = 0 ;
        }
        } */
    };
    Matrice(int L , int C){
        this->L = L;
        this->C = C;
        M.resize(L,vector<int>(C,0));
    };
    Matrice(const Matrice& M){
        this->L = M.L ;
        this->C = M.C;
        //M.resize(L,vector<int>(C,0));
        this->M = M.M;
    }
    ~Matrice(){
    }
    bool operator==(Matrice M1){
        if(L == M1.L && C == M1.C && M==M1.M){
            return true ;
        }else{
            return false ;
        }
    }
    friend bool operator!=(Matrice M1, Matrice M2){
        if(M1.L == M2.L && M1.C == M2.C && M1.M == M2.M){
            return false ;
        }else{
            return true ;
        }
    }
    friend bool operator<(Matrice M1, Matrice M2){
        if(M1.L < M2.L && M1.C < M2.C && M1.M <M2.M ){
            return true ;
        }else{
            return false ;
        }
    }
   friend bool operator>(Matrice M1, Matrice M2){
        if(M1.L > M2.L || M1.C > M2.C){
            return true ;
        }else{
            return false ;
        }
    }

    friend ostream& operator<<(ostream& Os , Matrice M){
        for(int i = 0 ; i < M.L ; i++){
            for(int j = 0 ; j < M.C ; j++){
                Os << M[i][j] << " " << endl;
            }
        }
    }

    

};

int main(){
    return 0;
}