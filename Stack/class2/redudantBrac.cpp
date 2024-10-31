#include <iostream>
#include <stack>
using namespace std;

bool redudantBrac(string &str){
    stack<char> st;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            st.push(ch);
        }
        else if(ch==')'){
            int opcount=0;
            while(!st.empty() &&st.top()!='('){
                char temp=st.top();
                if(temp=='+'||temp=='-'||temp=='*'||temp=='/'){
                    opcount++;
                }
                st.pop();
                
                
            }
            //here stack ke top par ek opening brac hoga
            st.pop();
            if(opcount==0){
                return true;
            }

        }


    }
    //brack ke beach me ek op pakka mila hoga
    return false;
}

int main(){
    string str="(((a+b))*(c+d))";
    bool ans=redudantBrac(str);
    if(ans==true){
        cout<<"Reducant brackets found"<<endl;
    }
    else{
        cout<<"No Reducant brackets found"<<endl;
    }
}