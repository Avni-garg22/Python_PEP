#include<iostream>
using namespace std;

int update(int arr[],int n){
   arr[0]= 10 ;

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int main(){

    int arr[10]={1,2,3,4,5,6,7};

    for(int i=0;i<10;i++)
   {
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    update(arr,9);

     for(int i=0;i<10;i++)
   {
    cout<<arr[i]<<" ";
    }
cout<<endl;
return 0;
}