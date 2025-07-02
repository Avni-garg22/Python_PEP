// brute force solution using extra space
// #include <bits/stdc++.h>
// using namespace std;

// void moveZero(int arr[], int n) {
//     int count = 0;      
//     int brr[n];        
//     int index = 0;       

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == 0) {
//             count++;
//         } else {
//             brr[index++] = arr[i]; 
//         }
//     }

//     while (index < n) {
//         brr[index++] = 0;
//     }


//     for (int i = 0; i < n; i++) {
//         cout << brr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {1, 2, 0, 9, 0, 5, 6, 0};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     moveZero(arr, n);
//     return 0;
// }
// Output: 1 2 9 5 6 0 0 0
// Time Complexity: O(n)    
// Space Complexity: O(n) (due to the temporary array)







