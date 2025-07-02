#include<iostream>
using namespace std;

void printArray(int arr[],int size){

for(int i=0; i<size; i++){
    cout<<arr[i]<<endl;
}

}


int main(){
    //initialise 
    int number[14];

    //accessing the array
    cout<<"value at 0 index "<<number[0]<<endl;
     cout<<"value at 10 index "<<number[10]<<endl;
      cout<<"value at 20 index "<<number[20]<<endl;

//------using function (make function above)
      int first[4]={2,4,5,6};
      printArray(first, 4);

      int trye[14]={1,2,3,4};
      printArray(trye,14);
//-----------------------------------------------------------
    
    printArray(trye,9);
    


}