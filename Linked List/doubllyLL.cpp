#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *prev;
    Node *next;

    Node(){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;

    }
};

void printLL(Node *head){
    Node *temp=head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node * &head){
    Node *temp=head;
    int count=0;
    while(temp !=NULL){
        ++count;
        temp=temp->next;
    }
    return count;
}
void insertAtStart(Node * &head,Node * &tail,int data){
    //LL is empty
    if(head ==NULL){
        Node *newNode=new Node(data);
        head=newNode;
        tail=newNode;

    }
    else{
        Node *newNode=new Node(data);
        newNode->next=head;
        head->prev=newNode;

        head=newNode;
    }

}

void insertAtTail(Node *&head,Node *&tail,int data){
    //LL is empty
    if(head == NULL){
        Node *newNode =new Node(data);
        head=newNode;
        tail=newNode;
    }

    else{
        Node *newNode=new Node(data);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
}

void insertAtPos(Node * &head,Node * &tail,int data,int pos){
    int len=getLength(head);
    if(head == NULL){
        Node *newNode =new Node(data);
        head=newNode;
        tail=newNode;
    }
    
    else{
        if(pos==1){
            insertAtStart(head,tail,data);
        }
        else if(pos ==len+1){
            insertAtTail(head,tail,data);
        }
        else{
            //insert in middle
            Node *newNode=new Node(data);

            Node *prevNode=NULL;
            Node *currNode=head;
            while(pos !=1){
                pos--;
                prevNode=currNode;
                currNode=currNode->next;
            }
            prevNode->next=newNode;
            newNode->prev=prevNode;
            newNode->next=currNode;
            currNode->prev=newNode;
        }
        
    }
}

int main(){
    Node *head=NULL;
    Node *tail=NULL;
    insertAtStart(head,tail,40);
    printLL(head);
    cout<<getLength(head)<<endl;
    insertAtTail(head,tail,50);
    insertAtTail(head,tail,60);
    insertAtPos(head,tail,20,2);
    printLL(head);

    return 0;
}