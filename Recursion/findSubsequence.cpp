#include <iostream>
using namespace std;
void findSubsequence(string str,int index,string output){
    //base case
    if(index>=str.length()){
        cout<<"->"<<output<<endl;
        return;

    }
    char ch=str[index];
    //exclude
    findSubsequence(str,index+1,output);
    //include
    output.push_back(ch);
    findSubsequence(str,index+1,output);
}
int main(){
    string str="abc";
    int index=0;
    string output=" ";
    findSubsequence(str,index,output);
    // for(int i=0;i<output.size();i++){
    //     cout<<output[i];
    // }
    
}