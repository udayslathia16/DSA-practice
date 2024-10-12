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
    }

    
};


int getLength(Node *head){
    Node *temp=head;
    int count=0;
    while(temp !=NULL){
        count++;
        temp=temp->next;
        
    }
    return count;
}
void insertAtStart(Node *&head,Node *&tail,int data){
    if(head==NULL){
        Node *newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        Node *newNode=new Node(data);
        newNode->next=head;
        head=newNode;
    }
}

void printLL(Node *head){
    Node *temp=head;

    while(temp !=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    // Node *first=new Node(10);
    // Node *second=new Node(20);
    // Node *third=new Node(30);
    // Node *fouth=new Node(40);
    // Node *fifth=new Node(50);

    // first->next=second;
    // second->next=third;
    // third->next=fouth;
    // fouth->next=fifth;
    

    Node *head=NULL;
    Node *tail=NULL;
    insertAtStart(head,tail,10);
    insertAtStart(head,tail,30);
    insertAtStart(head,tail,40);
    printLL(head);
    cout<<getLength(head);

    return 0;
}