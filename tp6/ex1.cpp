#include <iostream> 
using namespace std ;

class vecteur3D {
    float x , y , z ;
    public : 
        vecteur3D(float c1 = 0.0 , float c2 = 0.0 , float c3 = 0.0){
            x = c1 ; y = c2 ; z = c3;
        }
        friend vecteur3D operator+(vecteur3D,vecteur3D) ;
        friend float operator*(vecteur3D,vecteur3D);
        friend bool operator==(vecteur3D,vecteur3D);
        friend bool operator!=(vecteur3D,vecteur3D);
        friend ostream& operator<<(ostream& ot , vecteur3D v);
};
vecteur3D operator+(vecteur3D v1 , vecteur3D v2){
    vecteur3D v;
    v.x = v1.x + v2.x ;
    v.y = v1.y + v2.y ;
    v.z = v1.z + v2.z ;
    return v ;
}
float operator*(vecteur3D v1 , vecteur3D v2){
    vecteur3D v;
    v.x = v1.x * v2.x ;
    v.y = v1.y * v2.y ;
    v.z = v1.z * v2.z;
    return v.x+v.y+v.z;
}

bool operator==(vecteur3D v1 , vecteur3D v2){
    if(v1.x == v2.x && v1.y == v2.y && v1.z == v2.z){
        return true ;
    }
    else{
        return false ;
    }
}

bool operator!=(vecteur3D v1,vecteur3D v2){
    if(v1.x != v2.x && v1.y != v2.y && v1.z != v2.z){
        return true ;
    }
    else{
        return false ;
    }
}

ostream& operator<<(ostream& ot , vecteur3D v){

    ot<<"x :" << v.x << "y :" << v.y << " z :" << v.z ;
    return ot ;   
}



int main()
{
    return 0  ;
}