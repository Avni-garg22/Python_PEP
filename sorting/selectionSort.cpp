//naive approach 

// #include<bits/stdc++.h>
// using namespace std;
// #define INF 99999 

// void SelectionSort(int* arr, int n){
//     int temp[n];

//     for(int i=0;i<n;i++){
//         int min_ind=0;
//         for(int j=0;j<n;j++){
//             if(arr[j]<arr[min_ind]){
//                 min_ind=j;
//             }
//         }
//       temp[i]=arr[min_ind];
//         arr[min_ind]=INF;
//     }

//     for(int i=0;i<n;i++){
//        arr[i]=temp[i];
//     }
// }

// int main(){
//     int arr[]={10,2,9,6,4};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     SelectionSort(arr, n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

//optimised approach

// #include<bits/stdc++.h>
// using namespace std;

// void SelectionSort(int* arr,int n){
//     for(int i=0;i<n;i++){
//        int min_ind=i;
//        for(int j=i+1;j<n;j++){
//         if(arr[j]<arr[min_ind]){
//             min_ind=j;
//         }
//        }
//       swap(arr[min_ind],arr[i]);
//     }
// }

// int main(){
//     int arr[]={10,2,30,4,5,8};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     SelectionSort(arr,n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

/////////////////////REVERSE/////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int* arr,int n){
    for(int i=0;i<n;i++){
       int min_ind=i;
       for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min_ind]){
            min_ind=j;
        }

         swap(arr[min_ind],arr[j]);
       }
     
    }
}

int main(){
    int arr[]={10,2,30,4,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    SelectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

/////////////////////////////////
