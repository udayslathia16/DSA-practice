#include <iostream>
// #include <limits.h>
using namespace std;

// void rowsum(int arr[][4],int row,int col){
//     int sum=0;
//     for (int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             sum=sum+arr[i][j];
//         }
//         cout<<sum<<endl;
        
//         sum=0;
//     }
// }

void colsum(int arr[][4],int row,int col){
    int sum=0;
    for (int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
        
        sum=0;
    }
}


// void printArray(int arr[][4],int row ,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j];
            
//         }cout<<endl;
//     }
// }
int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,6,7},
        {8,5,6,4}
    };
    int row=3;
    int col=4;
    // printArray(arr,row,col);
    // rowsum(arr,row,col);
    colsum(arr,row,col);
    
}
