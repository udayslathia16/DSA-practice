#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> v={5,4,3,2,1};
    int n=5;
    bubbleSort(v);
}