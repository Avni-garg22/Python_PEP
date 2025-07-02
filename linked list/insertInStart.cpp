#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }

    public: //we dont wanna pass nullptr again and again
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

Node* insert(Node* head,int val){
    // Node* temp=new Node(val,head);
    // return temp;

    return new Node(val,head);
}

int main()
{
    vector<int> arr={12,5,7,8,9};
    Node* head=convertArr2ll(arr);
    // head=insert(head,100);
    head=new Node(100,head);
cout<<head->data;
}