 #include<iostream>
using namespace std;

void findDuplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            
            if (arr[i]==arr[j])
            {
                cout<<arr[i];
             break;
            }
        }
        
    }
}

int main(){
    int n;
    cout << "give array size";
    cin >> n;
    cout << "enter elements: ";
   int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
    findDuplicate(arr,n);
}