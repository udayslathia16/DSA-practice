#include <iostream>
using namespace std;

int oddOccuringElement(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        //single element case
        if(s==e){
            return s;
        }
        if(mid&1)
        // if(mid%2==1) //odd better way to find odd uo
        {
            if(arr[mid]==arr[mid-1]){
                s=mid+1;//move right
            }
            else{
                e=mid-1;//left
            }
        }
        else //even
        {
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
    }
    return -1;
}

int main(){
    int arr[]={10,10,2,2,5,5,20,20,11,11,10,10,2};
    int n=15;
    int ansIndex=oddOccuringElement(arr,n);
    if(ansIndex==-1){
        cout<<"No odd occuring element"<<endl;
    }
    else{
        cout<<"odd occuring elemrent at index:"<<ansIndex<<endl;
    }
    return 0;
}