#include<bits/stdc++.h>
using namespace std;

bool sortedArr(int arr[], int N){
    for(int i=1;i<N;i++){
        if(arr[i]>=arr[i-1]){
            
        }
        else
        return false;
    }
    return true;
}
int main(){
    int N;
    cin>>N;
    int arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    cout<<sortedArr(arr,N);
}

