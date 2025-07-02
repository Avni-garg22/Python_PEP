#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){
for(int i=0;i<n;i++){
    if(arr[i]==key)
    {
        return 1;
    }
}
return 0;
}

int main(){
    int arr[10]={2,4,1,-5,6,7,-9,11,15,20};
int key;
cin>>key;
    bool find=search(arr,10,key);

    if(find){
        cout<<"key is found"<<endl;
    }
    else
    cout<<"key not found";
return 0;
}

