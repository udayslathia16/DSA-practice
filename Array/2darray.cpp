#include <iostream>
#include <limits.h>
using namespace std;

int findmax(int arr[][4],int row,int col){
    int max=INT_MIN;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }}
    return max;
}
void printArray(int arr[][4],int row ,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j];
            
        }cout<<endl;
    }
}
int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,6,7},
        {8,5,6,4}
    };
    int row=3;
    int col=4;
    // printArray(arr,row,col);
    cout<<findmax(arr,row,col);
    
}
