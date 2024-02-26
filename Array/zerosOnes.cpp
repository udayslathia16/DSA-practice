#include <iostream>
using namespace std;

void zeroOne(int arr[],int size){
    int zero=0;
    int one=0;
    for(int i=0;i<size;i++){
        if(arr[i] ==0){
            zero=zero+1;
        }
        if(arr[i]==1){
            one=one+1;
        }
    }
    cout<<zero<<endl;
    cout<<one;
}

int main(){
    int arr[10]={0,0,0,1,1,0,0,3,2,1};
    int size=10;
    zeroOne(arr,size);
    return 0;
}
