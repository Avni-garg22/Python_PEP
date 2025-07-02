#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
   while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={4,3,1,9,8,10};
    int brr[9]={-1,7,-9,8,5,6,-10,18,4};

    reverse(arr,6);
    reverse (brr,9);

    printArray(arr,6);
    printArray(brr,9);

}