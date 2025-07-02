// #include <iostream>
// using namespace std;

// int main(){
//     for(int i=0;i<=3;i++){
//         for(int j=0;j<=3;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// ----------------------------------------

// #include <iostream>
// using namespace std;

// void print(int n){
//     for(int i=0;i<=n;i++){
//                 for(int j=0;j<=n;j++){
//                     cout<<"*";
//                 }
//                 cout<<endl;
//             }
// }

// int main(){
//     int n;
//     cin>>n;
// print(n);
// }

// ------------------------------------------------------------

// #include<iostream>
// using namespace std;

// void print(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//        int n;
//         cin>>n;
//         print(n);
//     }
// }

// -----------------------------------------------------

#include<iostream>
using namespace std;

// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"enter a no for rows";
//     cin>>n;
//     pattern(n);
// }


// -----------------------------------------------------

// void pattern(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"enter a no for rows";
//     cin>>n;
//     pattern(n);
// }

// ---------------------------------------------------------

// void pattern(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }
 
// int main(){
//     int n;
//     cout<<"enter a no for rows";
//     cin>>n;
//     pattern(n);
// }


// ----------------------------------------------------------

// void pattern(int n){
//     for(int i=n;i>0;i--){
//         for(int j=0;j<i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"enter a no for rows";
//     cin>>n;
//     pattern(n);
// }

// ------------------------------------

// void pattern(int n){
//     for(int i=n;i>0;i--){
//         for(int j=1;j<=i;j++){  //=<n-row+1(if keeping everything same as normal ques then)
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"enter a no for rows";
//     cin>>n;
//     pattern(n);
// }

// ---------------------------------------------------------

// void pattern(int n){
//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
        //star
        // for(int j=0;j<2*i+1;j++){
        //     cout<<"*";
        // }
        //space
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"enter a no for rows";
//     cin>>n;
//     pattern(n);
// }


// ------------------------------------------------

// void pattern(int n){
//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
        //star
        // for(int j=0;j<2*n-2*i-1;j++){
        //     cout<<"*";
        // }
        //space
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"enter a no for rows";
//     cin>>n;
//     pattern(n);
// }


// --------------------------------------------------------

// void pattern(int n){
//     for(int i=0;i<n;i++){
        //space
        // for(int j=0;j<n-i-1;j++){
        //     cout<<" ";
        // }
        //star
        // for(int j=0;j<2*i+1;j++){
        //     cout<<"*";
        // }
        //space
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<n;i++){
        //space
        // for(int j=0;j<i;j++){
        //     cout<<" ";
        // }
        //star
        // for(int j=0;j<2*n-2*i-1;j++){
        //     cout<<"*";
        // }
        //space
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"enter a no for rows";
//     cin>>n;
//     pattern(n);
// }


// ---------------------------------------------

// void print(int n){
// for(int i=0;i<n;i++){
//     for(int j=0;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// for(int i=0;i<n-1;i++){
//     for(int j=0;j<n-i-1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }


// ------------alternative of above-------------------

// void print(int n){
// for(int i=1;i<=2*n-1;i++){

//     int stars=i;
//     if(i>n) stars= 2*n-i;
//     for(int j=1;j<=stars;j++){
     
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }

// ----------------------------------------------------------

// void print(int n){
//     int start=1;
//     for(int i=0;i<n;i++){
//         if(i%2==0) start=1;
//         else start=0;
//         for(int j=0;j<=i;j++){
//             cout<< start;
//             start=1-start;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }


// -------------------------------------------------------------

void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int j=1;j<=2*n-2*i;j++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<2*i-j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}