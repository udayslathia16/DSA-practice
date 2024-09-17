// #include <iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node *next;

//     Node(){
//         cout<<"Inside default constructor"<<endl;
//         this->next=NULL;
//     }
//     Node(int data){
//         cout<<"Inside parametrized const"<<endl;
//         this->data=data;
//         this->next=NULL;
//     }
// };

// int main(){
//     // Node a;
//     Node *first=new Node(10);
//     Node *second=new Node(20);
//     Node *third=new Node(30);
//     Node *fourth=new Node(40);
//     Node *fifth=new Node(50);

//     first->next=second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fifth;

//     return 0;
// }

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(){
        this->next=NULL;
        cout<<"Default"<<endl;

    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        // cout<<"Main"<<endl;
    }
};

void printLL(Node *head){
    Node *temp=head;
    while(temp !=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
  
}
int main(){
    Node *first=new Node(10);
    Node *second =new Node(20);
    Node *third=new Node(30);
    Node *fourth=new Node(40);
    Node *fifth=new Node(50);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    Node *head=first;
    printLL(head);
    return 0;
}