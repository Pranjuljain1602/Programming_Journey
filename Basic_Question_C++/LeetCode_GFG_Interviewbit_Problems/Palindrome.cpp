// Given an integer x, return true if x is a palindrome, and false otherwise.

 
// Problem no. 9


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


// solution

// class Solution {
// public:
//     bool isPalindrome(int x) {
        
//         if(x<0)
//         return 0;
        
//         int rem, num = x, ans =0;
        
//         while(num){
            
//             rem = num%10;
//             num/= 10;
//             if(ans>INT_MAX/10)
//             return 0;
//             ans = ans*10 + rem;
//         }
        
//         if(ans==x)
//         return 1;
//         else
//         return 0;
        
//     }
// };