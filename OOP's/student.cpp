#include <iostream>
#include <string>
using namespace std;

class student{
private:
    string gf;
public:
    int id;
    int age;
    string name;
    int nos;
    bool present;

    //ctor :default constructor:assigns garbage value
    student(){
        cout<<"Student ctor called"<<endl;
    }
    student(int _id,int _age,string _name,int _nos,bool _present,string _gfname){
        id=_id;
        age= _age;
        name= _name;
        nos= _nos;
        present = _present;
        gf= _gfname;
        cout<<"Student parameterized ctor called"<<endl;
    }

    student(int _id,int _age,string _name,int _nos,bool _present){
        id=_id;
        age= _age;
        name= _name;
        nos= _nos;
        present = _present;
        
        cout<<"Student parameterized ctor called"<<endl;
    }

    void study(){
        int a;
        cout<<"studying"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    void bunk(){
        cout<<"bunking"<<endl;
    }
private:
    void gfchatting(){
        cout<<"chatting"<<endl;
    }
};

int main(){
    cout<<sizeof(string)<<endl;
    student s1; 
    
    student s2(85,21,"uday",9,1,"shizuka");
    cout<<s2.id<<endl;
    // cout<<s2.gf<<endl; 

    student s3(45,21,"raj",8,1);
    cout<<s3.name<<endl;

    //allocating on heap
    student *s4=new student(11,18,"chintu",5,0);
    cout<<s4->present<<endl;
    cout<<(*s4).name<<endl;

    delete s4;// NO LEAK
    // s1.name="Uday";
    // s1.age=21;
    // s1.id=85;
    // s1.present=1;
    // s1.nos=9;

    // student s2;
    // s2.name="Goli";
    // s2.age=19;
    // s2.id=95;
    // s2.present=0;
    // s2.nos=4;

}