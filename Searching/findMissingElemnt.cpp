#include <iostream>
using namespace std;
int binarySearch(int arr[],int n){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int diff=arr[mid]-mid;
        if(diff==1){
            s=mid+1;
        }
        else {
            
            ans=mid;
            e=mid-1;
        }
        // else if(arr[mid]>target){
        //     e=mid-1;
        // }
        
    }
    if (ans+1 ==0){
        return n+1;
    }
    return ans+1;
}
int main(){
    int arr[]={1,2,3,4,6,7,8,9};
    // int target=70;
    int n=8;
    cout<<binarySearch(arr,n);


}