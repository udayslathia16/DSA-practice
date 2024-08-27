#include <iostream>
using namespace std;
void perm(string &s,int index){
    //base case
    if(index>=s.length()){
        cout<<s<<" ";
        return;
    }
    //ek case
    for(int j=index;j<s.length();j++){
        swap(s[index],s[j]);
        //recursion
        perm(s,index+1);
        swap(s[index],s[j]);
    }
}

int main(){
    string s="abc";
    int index=0;
    perm(s,index);

}