#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>&st,int &pos,int &ans){
    //base case
    if(pos==1){
        ans= st.top();
        return ;
    }
    pos--;
    int temp=st.top();
    st.pop();

    //recursion
    solve(st,pos,ans);

    //backtrack
    st.push(temp);
};

int getMiddleElement(stack<int> &st){
    int size=st.size();
    if(st.empty()){
        return -1;
    }
    else{
        //stack is not empty
        //even
        int pos=0;
        if(size %2==0){
        pos=size/2;
    }
        else{
            //odd
        pos=size/2+1;
        }
        int ans=-1;
        solve(st,pos,ans);
        return ans;
    }
    


}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    
    int mid=getMiddleElement(st);
    cout<<mid<<endl;
    
}