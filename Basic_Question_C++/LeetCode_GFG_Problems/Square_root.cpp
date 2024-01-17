// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 

// Constraints:

// 0 <= x <= 231 - 1

//sloution

/* The Solution class provides a method, mySqrt, that calculates the square root of a given integer. */
class Solution {
public:
    /**
     * The function calculates the square root of a given number.
     * 
     * @param x The parameter "x" is an integer representing the number for which we want to find the
     * square root.
     */
    int mySqrt(int x) {
          long r = x;
   /* The code `while (r*r > x) r = (r + x/r) / 2;` is using the Newton's method to approximate the
   square root of `x`. */
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;
    }
};