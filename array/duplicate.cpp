#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int> &arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }

    for(int i=1;i<arr.size();i++){
        ans=ans^i;
    }
    return ans;
}

int main(){
    int n;
    cout << "give array size";
    cin >> n;
    cout << "enter elements: ";
     vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
   int result=findDuplicate(arr);
   cout<<result;
}