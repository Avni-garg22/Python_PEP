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

int main(){
    vector<int> arr={2,4,6,8,9};
    // Node y=Node(arr[0],nullptr);
    // cout<<y; //error y is an object
    // cout<<y.data<<endl;
    // cout<<y.next;

    //Node* y= new Node(arr[0],nullptr);
    Node* y= new Node(arr[0]); //here removed nullptr , as created one more contructor above
    cout<<y->data<<endl;
    cout<<y;
}
