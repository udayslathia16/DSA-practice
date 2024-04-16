#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector <int> &v){
    int n=v.size();
    //i=0 chod deta hu
    for(int i=1;i<n;i++){
        int key=v[i];
        int j=i-1;

        //move element of arr that are greater than key
        // to one positon ahead of thier current position
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;//insertion
    }
}
void print(vector <int> &v){
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector <int> v={5,4,3,2,1};
    insertionSort(v);
    print(v);
}