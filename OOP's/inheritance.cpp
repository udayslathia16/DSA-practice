#include <iostream>
using namespace std;

class bird{
public:
    int age;
    int weight;
    int nol;
    string col;

    void eat(){
        cout<<"eating"<<endl;
    }

    void fly(){
        cout<<"flying"<<endl;
    }
};

class Sparrow:public bird{
public:
    Sparrow(int age,int weight,int nol,string col){
        this->age=age;
        this->weight=weight;
        this->nol=nol;
        this->col=col;
    }
    void grassing(){
        cout<<"grassing"<<endl;
    }
};

class pigion:public bird{
public:
    void glutter(){
        cout<<"gluttering"<<endl;
    }
};

class parrot:public bird{
public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

int main(){
    Sparrow s(11,32,4,"brown");
    cout<<s.col<<endl;
    s.grassing();
    s.eat();

    return 0;
    
}