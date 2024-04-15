#include <iostream>
#include <vector>
using namespace std;

int main(){
      vector<vector<int> > arr;
      vector<int>vec1 (10,1);
      vector<int>vec2 (5,0);
      vector<int>vec3 (7,-1);
      vector<int>vec4 (1,2);

      arr.push_back(vec1);
      arr.push_back(vec2);
      arr.push_back(vec3);
      arr.push_back(vec4);

      for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;}
}