#include <iostream>
using namespace std;
void counting(int n){
    //base case
    if (n==1){
        cout<<1<<' ';
        return;
    }
    //processing
    cout<<n<<' ';
    //recursion call
    counting(n-1);

}
int main(){
    int n=8;
    counting(n);
}