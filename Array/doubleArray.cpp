#include <iostream>
using namespace std;

int main(){
    int arr[10],dou[10];
    cout<<"Enter value in array";
    for(int i=0;i<10;i++){
        cin>>arr[i];
        // cout<<endl;
    }
    cout<<"doubling the array";
    for(int i=0;i<10;i++){
        arr[i]=2*arr[i];
    }
    cout<<"printing doubled array";
    for(int i=0;i<10;i++){
        cout<<arr[i];
        cout<<endl;
    }

}