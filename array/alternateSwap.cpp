#include<iostream>
using namespace std;

void reverse(int arr[], int n){

    for(int i=0;i<n;i+=2){
        if(arr[i+1]<=n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
int printArr(int arr[],int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int brr[8]={1,2,3,4,5,6,7,8};

    reverse(arr,9);
    reverse(brr,8);

    printArr(arr,9);
    printArr(brr,8);

}