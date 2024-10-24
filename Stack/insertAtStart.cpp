#include <iostream>
#include <stack>
using namespace std;

int insertAtStart(stack<int> &st,int &element){
    //base case
    if(st.empty()){
        st.push(element);
        return 0;
    }
    //1 case main solve karuga
    int temp=st.top();
    st.pop();

    //rec
    insertAtStart(st,element);

    //backtrack
    st.push(temp);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int element=400;
    // cout<<st.top()<<endl;

    int AtStart=insertAtStart(st,element);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}