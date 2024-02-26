#include <iostream>
using namespace std;

int getUnique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[7]={2,10,11,23,23,10,2};
    int n =7;
    
    cout<<"Final answer is :"<<getUnique(arr,n);
}