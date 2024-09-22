#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(){
        this->data=0;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        cout<<"Destructor called for: "<<this->data<<endl;
    }
};

int getLength(Node *head){
    Node *temp=head;
    int count;
    while(temp !=NULL){
        ++count;
        temp=temp->next;
    }
    return count;
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


void deleteNode(Node *&head,Node *&tail,int position){
    //empty list
    if(head ==NULL){
        cout<<"Cannot delete ,coz LL is empty"<<endl;
        return ;
    }
    if(head==tail){
        //single element
        Node *temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }

    int len=getLength(head);

    //delete operation
    if(position==1){
        //first nide ko delete karo
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else if(position==len){
        // last node ko delete karo

        //find previous
        Node *prev=head;
        while(prev->next !=tail){
            prev=prev->next; 
        }

        //previous node ka link null karo
        prev->next=NULL;
        delete tail;
        tail=prev;
    }
    else{
        //middle node ko delete karo

        // set previous and curr pointers
        Node * curr=head;
        Node *prev=NULL;
        while(position !=1){
            position--;
            prev=curr;
            curr=curr->next;
        }

        //prev->next=curr->next;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
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
    Node *head=NULL;
    Node *tail=NULL;
    insertAtStart(head,tail,50);
    // insertAtStart(head,tail,40);
    // insertAtStart(head,tail,30);
    // insertAtStart(head,tail,20);
    // insertAtStart(head,tail,10);

    printLL(head);

    cout<<"Before "<<getLength(head)<<endl;
    cout<<"Before "<<tail->data<<endl;
    deleteNode(head,tail,1);
    cout<<"After "<<getLength(head)<<endl;
    cout<<"After tail "<<tail->data<<endl;

    printLL(head);
}