#include <iostream>
using namespace std;

int main(){
    int arr[5]={2,4,5,7,8};
    int target=8;
    int n=5;
    bool flag=0; //not found
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            
            flag =1;//found
            break;
        }
    }
    if(flag==1){
        cout<<"found";
    }
    else cout<<"naah";
    return 0;

}