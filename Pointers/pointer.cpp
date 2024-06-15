#include <iostream>
using namespace std;

int main(){
    int a =10;
    char ch='k';
    cout<<a<<endl;

    //creation
    int *ptr=&a;
    char* pt=&ch;

    //access
    cout<<"address of a"<<&a<<endl;
    cout<<"address of a"<<ptr<<endl;
    cout<<"value stores at the pointer pointing location"<<*ptr<<endl;
    cout<<"address of ptr"<<&ptr<<endl;

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(pt);
}