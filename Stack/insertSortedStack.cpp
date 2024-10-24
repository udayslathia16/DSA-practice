#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int>&st,int element){
    //base
    if(st.empty()||element>st.top()){
        st.push(element);
        return;
    }
    int temp=st.top();
    st.pop();
    //rec
    insertSorted(st,element);
    //back
    st.push(temp);
}

int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    int element=5;

    insertSorted(st,element);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();

    }
}