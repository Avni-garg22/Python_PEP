
// #include<iostream>
// using namespace std;
// int Count(int N){
//     int count=0;
//     while(N>0){
//        int A=N%10;
//         count++;
//         N=N/10;
//     }
//     return count;
// }
// int main(){
//     int N;
//    cin>>N;
//    cout<<Count(N);
// }


// time complexitiy: O(log base 10(N)) becz division by 10.

#include<bits/stdc++.h>
using namespace std;

// int Count(int N){
//   int cnt=(int)(log10(N)+1);
//     return cnt;
// }

// int main(){
//         int N;
//    cin>>N;
//    cout<<Count(N);
// }


//ARmstrong number: sum of cube of digits is equal to number: eg- 347 = 3cube+4cube+7cube
// int main(){
//     int n;
//     cin>>n;
//     int dup=n;
//     int cube=0;
//     while(n>0){
//         int a=n%10;
       
//         cube=cube+(a)*(a)*(a);
//         n=n/10;
//     }
//     if(cube==dup){
//         cout<<"true";
//     }
//     else 
//     cout<<"false";
// }



// PRINT ALL DIVISORS

void printDivisors(int n){
    vector<int> ls;
    //o(sqrt(n))
    for(int i=1;i*i<=n;i++){ //i<=sqrt(n) it taks time
        if(n%i==0){ 
            ls.push_back(i);
            if(i != n/i ){
                ls.push_back(n/i);
            }
        }
    }
    //O(no. of factors * log(no. of factors))
    sort(ls.begin(), ls.end());
   //O(no.of factors)
    for(auto it: ls) cout<<it<<" ";
}

int main(){
    int n;
    cin>>n;
    printDivisors(n);
}
      
