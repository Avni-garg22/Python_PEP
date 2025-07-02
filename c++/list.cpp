#include<iostream>
#include<list>
using namespace std;

//doubly linked list 

int main(){
list<int> l;

list<int> n(5,100);
cout<<"printing n: "<<endl;
for(int i:n){
cout<<i<<endl;
}

l.push_back(1);
l.push_front(2);

cout<<"After pushing the values: ";
for(int i:l){
    cout<<i<<" ";
}

cout<<endl;

l.erase(l.begin());
cout<<"After erase: ";

for(int i:l){
    cout<<i<<" "<<endl;
}

cout<<"Size of list : "<<l.size()<<endl;

}