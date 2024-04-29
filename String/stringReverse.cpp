#include <iostream>
#include <string.h>

using namespace std;
void reverseString(char ch[],int n){
    int i =0;
    int j=n-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=strlen(ch);
    cout<<"Before ch"<<ch<<endl;
    reverseString(ch,len);
    cout<<"After "<<ch<<endl;

    return 0;

}