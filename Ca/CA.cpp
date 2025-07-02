// level 1: stacking the books 
// push the books numbers(10,20,30,40,50) onto a stack in a given order. pop and display them to check the stacking order
// completion condition: the stack should print [50,40,30,20,10] when popped

// level2: reordering the books(reversing the stack)
// use another stack to reverse the book order back to [10,20,30,40,50]
// onlu push,pop and peek operations allowed-no direct arrat manpulation
// completion condition:
// the reversed stack should restore the original order.

#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> s) {
    while (!s.empty()) 
    {
        cout << s.top() << " ";
        s.pop();
    }             
    cout << endl;

}

int main() {
    stack<int> bukStack;

    bukStack.push(10);
    bukStack.push(20);
    bukStack.push(30);
    bukStack.push(40);
    bukStack.push(50);

    cout << "Stack after popping: ";
    printStack(bukStack); 

    bukStack.push(10);
    bukStack.push(20);
    bukStack.push(30);
    bukStack.push(40);
    bukStack.push(50);

    stack<int> tempStack;
    while (!bukStack.empty()) {
        tempStack.push(bukStack.top());
        bukStack.pop();
    }
    cout << "Reversed stack: ";
    printStack(tempStack);

    return 0;
}


 



   


