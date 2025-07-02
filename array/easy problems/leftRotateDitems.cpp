// BRUTE FORCE SOLUTION  time complexity= O(d)+O(n-d)+O(d)=>O(n+d)
//SC=> O(d) becz of temp

// #include<bits/stdc++.h>
// using namespace std;

// int leftRotate(int arr[],int n,int N){
//  N=N%n;
//     int temp[N];

//     for(int i=0;i<N;i++){
//         temp[i]=arr[i];
//     }

//     for(int i=0;i<N;i++){
//         arr[i]=arr[i+N];
//     }

//     for(int i=n-N;i<n;i++){
//         arr[i]=temp[i-n+N];
//     }
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int N;
//     cin>>N;
//    leftRotate(arr,5,N);
//    for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
//    }
//    return 0;

// }

// OPTIMIZED SOLUTION: Time Comp.-->O(d)+O(n-d)+O(n)=O(2n)

#include <bits/stdc++.h>
using namespace std;

void Rotate(int arr[], int start, int end)
{
    int temp;
    while (start <= end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int leftRotate(int arr[], int n, int N)
{
    Rotate(arr, 0, N - 1);
    Rotate(arr, N, n - 1);
    Rotate(arr, 0, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int N;
    cin >> N;

    leftRotate(arr, 5, N);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}