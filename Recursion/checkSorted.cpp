#include <iostream>
using namespace std;
bool checkSorted(int arr[],int size,int index){
    if(index>=size){
        return true;
    }
    if(arr[index+1]>arr[index]){
        // return true;
        bool ans=checkSorted(arr,size,index+1);

    }
    else{
        return false;
    }
    
}
int main(){
    int arr[]={10,15,20,36,40,50};
    int size=5;
    int index=0;
    bool isSorted=checkSorted(arr,size,index);
    if(isSorted){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}