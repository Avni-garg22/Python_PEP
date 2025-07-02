#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[], int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > max) {
            max=arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int n)
{
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < min) {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[10] = {11,2,3,7,8};
   
    cout<<getMax(arr,6)<<endl;
    cout<<getMin(arr,6);
}

