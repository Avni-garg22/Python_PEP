#include<bits/stdc++.h>
using namespace std;


int secondLargest(int arr[],int N){
   

    int slargest=-1;
    int largest=arr[0];

    for(int i=1;i<N;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
    }
    return slargest;
}

int secondSmallest(int arr[],int N){
    
    int ssmallest=INT_MAX;
    int smallest=arr[0];

    for(int i=1;i<N;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
    }
    return ssmallest;
}
int main(){
    int N;
    cin>>N;
    int arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    cout<<secondSmallest(arr,N)<<endl;
    cout<<secondLargest(arr,N)<<endl;
    return 0;
}