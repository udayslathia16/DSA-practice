#include <iostream>
#include <limits.h>
using namespace std;
void maxim(int arr[],int size,int index,int &maxi){
    if(index>=size){
        return ;
    }
    maxi=max(maxi,arr[index]);
    maxim(arr,size,index+1,maxi);
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int maxi=INT_MIN;
    maxim(arr,size,index,maxi);
    cout<<maxi;
}