#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int swapped=false;
        for (int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
}

int main(){
    int arr[] = {10,9,8,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }

return 0;
}