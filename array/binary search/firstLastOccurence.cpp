#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
       else{
            start=mid+1;
        }
         mid=start+(end-start)/2;
    }
    return ans;
}
int lastOcc(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
       else{
            start=mid+1;
        }
         mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int even[6]={1,2,3,3,3,3};
    cout<<"first occurence of key is: "<<firstOcc(even,6,3)<<endl;
 cout<<"last occurence of key is: "<<lastOcc(even,6,3)<<endl;
}