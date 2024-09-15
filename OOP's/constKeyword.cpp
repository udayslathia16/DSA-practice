#include <iostream>
using namespace std;

int main(){
    // const int x=5; //x is constant
    //initialization can be done
    //but we cant re-assign a value
    //x=10
    // cout<<x<<endl;

    // 2. const with pointers
    // const int *a=new int(2);//CONST data, NON-CONST pointer
    // int const *a= new int(3);// same as line no. 13
    // cout<<*a<<endl;
    // // *a=20;
    // int b=20;
    // a=&b;
    // cout<<*a<<endl;

    // CONST pointet but NON-CONST data
    // int *const c=new int (10);
    // cout<<*c<<endl;
    // *c=88;
    // cout<<*c<<endl;
    // int d=33;
    // c=&d;

    //CONST pointer CONST data
    const int *const a=new int(10);
    cout<<*a<<endl;
    *a=70;
    int b=199;
    a=&b;

    return 0;
    

}