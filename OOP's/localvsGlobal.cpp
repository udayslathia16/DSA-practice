#include <iostream>
using namespace std;
int x=2;//global variable
int main(){
    x=4;//global x
    int x=55; //local to main() fn
    cout<<x<<endl;
    cout<<::x<<endl; //accessing global with::
    {
        int x=69;
        cout<<x<<endl;
        cout<<::x;
    }
    return 0;
}