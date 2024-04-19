#include <iostream>
using namespace std;
int BS(int a[],int s,int e,int x){
    // int s=0;
    // int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]<x){
            s=mid+1;
        }
        else e=mid-1;
    }
    return -1;
}
int expoSearch(int a[],int n,int x){
    if(a[0]==x){
        return 0;
    }
    int i=1;
    while(i<n && a[i]<=x ){
        i=i*2;

    }
    return BS(a,i/2,min(i,n-1),x);
}
int main(){
    int a[]={3,4,5,6,11,13,14,15,56,76};
    int x=56;
    int n=sizeof(a)/sizeof(int);
    int s=0;
    int e=n-1;
    cout<<expoSearch(a,n,x);
    }