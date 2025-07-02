// *****************************************REVERSE INTEGER************************************
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
 

// Constraints:

// -231 <= x <= 231 - 1

#include<bits/stdc++.h>
using namespace std;

// class Solution {
//     public:
//         int reverse(int x) {
//             int ans=0;
//             while(x != 0){
//                 int digit= x % 10;
    
//                 if((ans > INT_MAX/10) || (ans < INT_MIN/10))
//                 {
//                     return 0;
//                 }
//                 ans=(ans*10)+digit;
//                 x=x/10;
//             }
//             return ans;
//         }
//     };

//     int main(){
//         int x;
//         cin>>x;
//         Solution sol;
//         int result=sol.reverse(x);
//         cout<<result;
//     }



    // -------------------------------------------------------------
    // 2) **************************PALLINDROME***********************************
    // Given an integer x, return true if x is a palindrome, and false otherwise.

 

    // Example 1:
    
    // Input: x = 121
    // Output: true
    // Explanation: 121 reads as 121 from left to right and from right to left.
    // Example 2:
    
    // Input: x = -121
    // Output: false
    // Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
    // Example 3:
    
    // Input: x = 10
    // Output: false
    // Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
     
    
    // Constraints:
    
    // -231 <= x <= 231 - 1

    class Solution {
        public:
            bool isPalindrome(int x) {
                if(x<0) return false;
                int org=x;
                int rev=0;
                while(x>0){
                    int num=x%10;
                    if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && num > 7)) return false;
                    if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && num < -8)) return false;
                     rev=rev*10+num;
                    x=x/10;
                }
                return org==rev;
            }
        };