#include <iostream>
#include <limits.h>
using namespace std;

// int MinMax(int arr[],int size){
//     int minAns=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<minAns){
//             minAns=arr[i];
//         }
//     }
//     return minAns;
// }


int MinMax(int arr[],int size){
    int minAns=INT_MAX;
    for(int i=0;i<size;i++){
        minAns=min(arr[i],minAns);
    }
    return minAns;
}


int main(){
    int arr[6]={18,3,44,28,6,4};
    int size=6;
    cout<<MinMax(arr,size);

    return 0;
}