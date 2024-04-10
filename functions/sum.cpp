#include <iostream>
using namespace std;

void sumOfNumbers(int n){
    int sum =0;

    for(int i=0;i<=n;i++){
        sum=sum+i;
        
    }
    cout<<sum;
}

int main(){
    sumOfNumbers(5);
}
    