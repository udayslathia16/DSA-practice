#include <iostream>
#include <limits.h>
using namespace std;

void transpose(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }}
}
void printArray(int arr[][4],int row ,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j];
            
        }cout<<endl;
    }
}
int main(){
    int arr[4][4]={
        {1,2,3,4},
        {5,6,6,7},
        {8,5,6,4},
        {2,4,2,1}
    };
    int row=4;
    int col=4;
    transpose(arr,row,col);
    printArray(arr,row,col);
    
    
}
