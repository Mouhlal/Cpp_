#include <iostream>
using namespace std ;


class Note{
    float value ;

    public:

void input(){
    cout << "Saisir une note entre 0 et 20" << endl ;
    cin >> value ;
        while(value<0 || value>20){
    cin>>value;        
}
}

void print(){
    cout << "La note est: " << value << endl ;
}

void set(float value){
    this->value = value ;
}

int get(){
    return value ;
}

string apprecier(){
   if(value>=15){
    return  "Très Bien" ;
   }
   else if (value<=5)
   {
    return "catastrophe";
   }
   else if(value>5 && value<=10){
   return  "Rattrapage"  ;
   }
   else if (value>=10 && value<=14){
    return "Moyenne"  ;
   }
   else {
    return "Non Admis"  ;
   }
}

};

void Harmonise(Note A){
    if(A.get() < 8){
        A.set(8);
    }else{
        A.set(0);
    }
}




int main()
{
    Note N ;

    N.input();
    N.print();
    N.set(8);
    cout <<  N.get() << endl;
    cout <<  N.apprecier() << endl;
   

    return 0 ;
}