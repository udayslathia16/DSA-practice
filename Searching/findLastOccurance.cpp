#include <iostream>
using namespace std;
int findLastOccurance(int arr[],int target,int n){
    int s=0;
    int e=n-1;
    int ans=-1;
    
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        // mid=(s+e)/2;
        
    }
    return ans;
}
int main(){
    int arr[]={10,20,30,30,30,30,40,50};
    int target=30;
    int n=8;
    cout<<findLastOccurance(arr,target,n);


}