#include <iostream>
using namespace std;

int factorial(int n){
    //base condition
    if (n==1 || n==0){
        return 1;
    }
    //processing

    //recursive call
    int recursionKaAns= factorial(n-1);
    //processing
    int finalAns=n * recursionKaAns;
}

int main(){
    int n=5;
    cout<<factorial(5);

}