#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
bool checkPalindrome(char ch[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=strlen(ch);
    int ans=checkPalindrome(ch,len);
    cout<<ans;
}