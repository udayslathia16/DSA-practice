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

void sortSorted(stack<int> &st){
    if(st.empty()){
        return;
    }
    //1 case
    int temp=st.top();
    st.pop();

    //rec
    sortSorted(st);

    //back
    insertSorted(st,temp);
}

int main(){
    stack <int> st;
    st.push(10);
    st.push(5);
    st.push(12);
    st.push(8);
    st.push(9);

    // int element=5;

    sortSorted(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();

    }
}