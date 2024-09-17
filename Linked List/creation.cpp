
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
int getLength(Node * head){
    Node *temp=head;
    int count=0;
    while(temp !=NULL){
       
        ++count;
        temp=temp->next;
    }
    return count;
    // cout<<count<<endl;
}
void insertAtStart(Node * &head,Node * &tail,int data){
    if(head==NULL){
        //create new node
        Node *newnode=new Node(data);
        //update head
        head=newnode;
        tail=newnode;
    }
    else{
    //creation
    Node * newNode=new Node(data);
    //attach head
    newNode->next=head;
    //update head
    head=newNode;
    }
    
}
void insertAtTail(Node *&head,Node *&tail,int data){
    if(head==NULL){
        //create new node
        Node *newnode=new Node(data);
        //update tail
        head=newnode;
        tail=newnode;
    }
    else{
        //create new node
        Node *newnode=new Node(data);
        //attach tail
        tail->next=newnode;
        //update tail
        tail=newnode;
    }
    
}
void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    // assumption position ki value[1 to length +1 takh ho sakti hai]
    int length=getLength(head);

    if(position =1){
        insertAtStart(head,tail,data);
    }
    else if(position ==length+1 ){
        insertAtTail(head,tail,data);
    }
    else{
        //insert at middle 
        Node *newnode=new Node(data);
        //traverse
        Node* prev=NULL;
        Node*curr=head;
        while(position !=1){
            prev=curr;
            curr=curr->next;
            position--;
        }
        //atach prev to new node
        prev->next=newnode;
        //curr to newnode
        newnode->next=curr;


    }
}

void createTail(Node *head,Node *&tail){
    Node *temp=head;

    while(temp->next !=NULL){
        temp=temp->next;
    }
    //when this loop ends it is at the last node
    tail=temp;
}

void printLL(Node *head){
    Node *temp=head;
    // int count=0;
    while(temp !=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        // count++;
        
    }
    cout<<endl;
    // cout<<count<<endl;
    
  
}
int main(){
    Node *head=NULL;
    Node *tail=NULL;

    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,50);

    insertAtPosition(head,tail,40,40);

    printLL(head);
    getLength(head);

    // Node *first=new Node(10);
    // Node *second =new Node(20);
    // Node *third=new Node(30);
    // Node *fourth=new Node(40);
    // Node *fifth=new Node(50);
    // Node *tail=fifth;

    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;

    // Node *head=first;
    // printLL(head);

    // insertAtTail(head,tail,500);
    // printLL(head);
    return 0;
}