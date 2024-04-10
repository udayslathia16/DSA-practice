#include <iostream>
using namespace std;

int main(){
    int no,rem;
    cout<<"Enter number";
    cin>>no;
    cout<<endl;
    while(no>0){
        rem=no%10;
        no=no/10;
        cout<<rem<<endl;

    }
    return 0;


}

