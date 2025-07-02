/////////////////////////////////////////Optimal only: easy problem 
// #include<bits/stdc++.h>
// using namespace std;

// void leftRotate(int arr[],int N){
//     int temp=arr[0];
//     for(int i=0;i<N;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[N-1]=temp;

//     for(int i=0;i<N;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5}; 
//      leftRotate(arr,5);
//      return 0;
// }

////////////////////////////////same but little diff.///////////////////////////////////////////

// #include<bits/stdc++.h>
// using namespace std;

// void leftRotate(int* arr,int n){
//     int temp=arr[0];
//     for(int j=1;j<=n-1;j++){
//        arr[j-1]=arr[j];
//     }
//     arr[n-1]=temp;
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     leftRotate(arr,n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


///Space in algo= O(N)
//extra space=O(1)
