#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
}
int main(){
    vector<int> v;
    while(1){
        int a;
        cin>>a;
        v.push_back(a);
        cout<<"Capacity :"<<v.capacity()<<endl<<"Size :"<<v.size()<<endl;
    }

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // print(v);
}