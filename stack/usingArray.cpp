#include<iostream>
#define MAX 100

using namespace std;

class stack{
    private:
    int top;
    int arr[MAX];
   
    public:
    stack(){
        top=-1;
    }

    bool isFull(){
        return top==MAX-1;
    }

    bool isEmpty(){
        return top==-1;
    }

    void push(int x){
        if (isFull()){
            cout<<"full"<<endl;
            return;
        }

        else{
            arr[++top]=x;
            cout<<x<<"pushed";
        }
    }

    void pop(){
        if(isEmpty()){
            return;
        }
        else{
            cout<<arr[top--];
        }
    }
 int peek(){
    if(isEmpty()){
        return -1;
    }
    else{
        return arr[top];
    }
 }

 int size(){
    return top+1;
 }

};

int main(){
    stack s;
    s.push(100);
    cout<<endl;
    s.push(20);
    cout<<endl;

    s.pop();
    cout<<s.peek()<<endl;
    s.push(300);
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}

