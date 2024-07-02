#include <iostream>
using namespace std;

int power(int n){
    //base case
    if(n==0){
        return 1;
    }
    //processing
    int ans=2 * power(n-1);
    return ans;
}

int main(){
    int n=10;
    cout<<power(n);
    return 0;
}