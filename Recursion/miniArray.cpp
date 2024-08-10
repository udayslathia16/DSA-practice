#include <iostream>
#include <limits.h>
using namespace std;
void findMini(int arr[],int size,int index,int &mini){
    //base case
    if(index>=size){
        return;
    }
    //processing
    mini=min(mini,arr[index]);
    //recursive call
    findMini(arr,size,index+1,mini);
}
int main(){
    int arr[]={20,30,10,40,50};
    int size=5;
    int index=0;
    int mini=INT_MAX;
    findMini(arr,size,index,mini);
    cout<<mini;
}