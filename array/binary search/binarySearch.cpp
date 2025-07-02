#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
       else{
            start=mid+1;
        }
         mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,3,5,6,9};

    int evenSearch=binarySearch(even,6,4);
    cout<<"position of searched key is: "<<evenSearch<<endl;

    int oddSearch=binarySearch(odd,5,1);
    cout<<"position of searched key is: "<<oddSearch<<endl;
}
