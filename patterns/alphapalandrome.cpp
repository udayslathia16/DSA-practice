#include <iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
    
     for(int row=0;row<n;row++){
        char ch;
        for(int col=0;col<row+1;col++){
            int number =col+1;
            ch=number +'A'-1;
            cout<<ch;
        }

        //jab takh A tk nahi paunchte
        //tabh tk print karenge
        for(char alphabet=ch;alphabet>'A';){
            alphabet--;
            cout<<alphabet;
        }
        cout<<endl;
     }

}