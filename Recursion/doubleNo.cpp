#include <iostream>
using namespace std;
void doubleNo(int arr[],int size,int index){
    if(index>=size){
        return ;
    }
    arr[index]=2*arr[index];
    doubleNo(arr,size,index+1);
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    doubleNo(arr,size,index);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }
}