#include <iostream>
using namespace std;
void fastExponentiation(int a,int b){
    int ans=1;
    while(b>0){
        if(b & 1){
            //odd
            ans=ans*a;
        }
        a=a*a;
        b>>=1; //b=b/2
    }
    cout<< ans; //O(log b)
}
int main(){
    fastExponentiation(5,4);
    return 0;
}