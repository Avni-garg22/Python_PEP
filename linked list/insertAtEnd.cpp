#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
data=data1;
next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2ll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

Node* tail(Node* head,int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }

    Node* newNode=new Node(val);
    temp->next= newNode;
    return head;
}


int main(){
    vector<int>arr={12,4,6,7,8};

    Node* head=convertArr2ll(arr);
    head=tail(head,100);
cout<<tail->data;
}