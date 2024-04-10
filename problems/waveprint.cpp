#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatrixRow(vector<vector<int>> v){
int row = v.size();
int col = v[0].size();

for(int startCOl = 0; startCOl < col; startCOl++){
if((startCOl & 1) == 0){
// even index > top to bottom
for(int i = 0; i<row; i++){
cout<<v[i][startCOl]<<" ";
}
}
else{
// odd index > bottom to top
for(int i = row-1; i>=0; i--){
cout<<v[i][startCOl]<<" ";
}
}
}
}
int main() {

vector<vector<int>>v {
{1,2,3,4},
{5,6,7,8},
{9,10,11,12}
};

wavePrintMatrixRow(v);

return 0;
}

