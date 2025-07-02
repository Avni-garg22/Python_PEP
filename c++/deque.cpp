#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }

    cout<<"Print First index element: "<<d.at(1)<<endl;
    cout<<"Front: "<<d.front()<<endl;
    cout<<"back: "<<d.back()<<endl;

    cout<<"empty or not: "<<d.empty()<<endl; //0 means false, 1 means true
    
    cout<<"Befor erase:"<<d.size()<<endl;
    // d.erase(d.begin(),d.begin()+1); //for deleting ist element
     d.erase(d.begin()+1,d.begin()+2);
    cout<<"After erase: "<<d.size()<<endl;
   
   for(int i:d){
    cout<<i<<endl;
   }

}

