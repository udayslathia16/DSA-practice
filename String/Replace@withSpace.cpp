#include <iostream>
#include<string.h>
using namespace std;
void replaceCharacter(char ch[],int n){
    int index=0;

    while(ch[index]!='\0'){
        char curr=ch[index];
        if(curr=='@'){
            //insert space
            ch[index]=' ';
        }
        index++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=strlen(ch);
    cout<<"before replacing :"<<ch <<endl;
    replaceCharacter(ch,len);
    cout<<"after replacing : "<<ch<<endl;

    return 0;
}