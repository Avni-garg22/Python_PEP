#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertionAtHead(Node* &head, int d){
    Node* temp=new Node(d);
    temp->next=head;
   head=temp;
    
}

void insertAtTail(Node* &tail, int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void insertInMiddle(Node* &head, int d, int position){
    if(position==1){
        insertionAtHead(head,d);
    }

    else{
        Node* temp=head;
        int cnt=1;
        while(cnt<position-1){
            temp=temp->next;
            cnt++;
        }
            Node* nodeToInsert=new Node(d);
            nodeToInsert->next=temp->next;
            temp->next=nodeToInsert;
        
    }
}

int main(){
    //created a new node
    Node* node1= new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
     
    //pointed new node to the next node
    Node* head= node1;
    insertionAtHead(head,12);
    cout<<head->data<<endl;

    //printing the ll
    print(head);

    Node* tail=node1;
    insertAtTail(tail,15);
    cout<<tail->data<<endl;

    //insert in between
    
    insertInMiddle(head,22,1);
    cout<<head->data<<endl;
    print(head);

}