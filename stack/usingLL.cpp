#include<iostream>
using namespace std;

struct Node{
    public:
    Node* next;
    int data;
};

class stack{
    private:
    Node* top;

    public:
    stack(){
        top=nullptr;
    }
    bool isEmpty(){
        return top==nullptr;
    }

    void push(int x){
        Node* temp=new Node();
        if(!temp){
            cout<<"overflow"<<endl;
        }
        temp->data=x;
        temp->next=top;
        top=temp;
        cout<<x<<" pushed" <<endl;

    }

    void pop(){
        if(isEmpty()){
            cout<<"underflow"<<endl;
            return;
        }

        Node* temp=top;
        top=top->next;
        delete temp;
    }


    int peek(){
        if(isEmpty()){
            cout<<"empty"<<endl;
            return -1;
        }

        else return top->data;
    }
};

int main(){
    stack s;
    s.push(10);
    s.push(100);
    s.push(50);
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
}