#include <iostream>
using namespace std;

void sortZeroOne(int arr[],int n){
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zerocount++;
        }
        if(arr[i]==1){
            onecount++;
        }
    }
    // int i;
    // for(i=0;i<zerocount;i++){
    //     arr[i]=0;
    // }
    // for(int j=i;j<n;j++){
    //     arr[j]=1;
    // }

    int index=0;
    while(zerocount--){
        arr[index]=0;
        index++;
    }
    while (onecount--){
        arr[index]=1;
        index++;
    }
    {
        /* code */
    }
    
}


int main(){
    int arr[8]={0,0,1,1,0,1,0,1};
    int n=8;

    sortZeroOne(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}