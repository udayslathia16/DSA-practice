#include <iostream>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }
    int ans = n+sum(n-1);
    return ans;
}

int main(){
    int n=10;
    cout<<sum(n);
}