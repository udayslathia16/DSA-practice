#include <iostream>
#include<vector>
using namespace std;
void printDigits(int num,vector<int> & ans){
    //base case
    if(num==0){
        return;
    }
    //processing
    int digit=num%10;
    
    //update num
    num=num/10;
    //recursive call
    printDigits(num,ans);
    //processing 
    ans.push_back(digit);
    // cout<<digit<<endl;

}
int main(){
    int num=1603;
    vector<int> ans;
    printDigits(num,ans);
    for(int n:ans){
        cout<<n;
    }
}