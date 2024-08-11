#include <iostream>
using namespace std;
bool binSearch(int arr[],int s,int e,int target){
    int mid=s=(e-s)/2;
    if(s>e){
        return -1;
    }
    if(arr[mid]==target){
        return 1;
    }
    if(arr[mid]<target){
        return binSearch(arr,mid+1,e,target);
    }
    else{
        return binSearch(arr,s,mid-1,target);
    }
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int size=8;
    int s=0;
    int e=size-1;
    int target=10;
    int foundIn=binSearch(arr,s,e,target);
    if(foundIn!=-1){
        cout<<"target found at :"<<foundIn<<endl;
    }
    else{

    }

}