/*
#include<iostream>
#include<limits.h>
using namespace std;

void intersectionArr(int arr[],int brr[],int n, int m){
    for(int j=0;j<m;j++){
        {   for(int i=0;i<n;i++)
            if(arr[i]==brr[j]){
                cout<<arr[i];
                arr[i]=INT_MIN;
                break;
            }
            
        }
    }
}

int main(){
    int n;
    cout<<"enter array size:"<<endl;
    cin>>n;
    cout<<"enter values: "<<endl;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m; 
     cout<<"enter array size:"<<endl;
    cin>>m;
    int brr[100];
    cout<<"enter values: "<<endl;
    for(int j=0;j<m;j++){
        cin>>brr[j];
    }

    intersectionArr(arr,brr,n,m);
    return 0;

}
*/
#include<iostream>
#include<limits.h>
using namespace std;

void intersectionArr(int arr[],int brr[],int n, int m){

int i=0,j=0;
while(i<n && j<m){
    if(arr[i]==brr[j]){
        cout<<arr[i];
        i++;
        j++;
    }

    else if(arr[i]< brr[j]){
        i++;
    }

    else 
    {j++;
    }
}

}


int main(){
    int n;
    cout<<"enter array size:"<<endl;
    cin>>n;
    cout<<"enter values: "<<endl;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m; 
     cout<<"enter array size:"<<endl;
    cin>>m;
    int brr[100];
    cout<<"enter values: "<<endl;
    for(int j=0;j<m;j++){
        cin>>brr[j];
    }

    intersectionArr(arr,brr,n,m);
    return 0;

}

