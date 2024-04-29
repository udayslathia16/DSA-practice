#include <iostream>
#include <string.h>
using namespace std;
void convertToUpperCase(char ch[],int n){
    int index=0;

    while(ch[index]!='\0'){
        char currChar=ch[index];
        //check if lowercase then convert to upper case
        if(currChar>='a' &&currChar <='z'){
            ch[index]=currChar-'a'+'A';
        }
        index++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=strlen(ch);
    convertToUpperCase(ch,len);
    cout<<ch;

    return 0;
}