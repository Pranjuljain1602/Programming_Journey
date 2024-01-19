// 6: Given two numbers n, r. Find nCr (Combination). Use Function here.

// Recursive Approach

// #include<iostream>
// using namespace std;

// // Function to calculate factorial of a number
// int factorial(int num) {
//     if (num == 0 || num == 1) {
//         return 1;
//     }
//     return num * factorial(num - 1);
// }

// // Function to calculate combination (nCr)
// int nCr(int n, int r) {
//     if (r < 0 || r > n) {
//         return 0;  // Invalid input for combination
//     }
//     return factorial(n) / (factorial(r) * factorial(n - r));
// }

// int main() {
//     int n, r;

//     // Input
//     cout << "Enter two numbers (n and r): ";
//     cin >> n >> r;

//     // Calculate and display combination
//     cout << "Combination (nCr) is: " << nCr(n, r) << endl;

//     return 0;
// }


// Loop based approach


#include<iostream>
using namespace std;

// Function to calculate factorial of a number using a loop
int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

// Function to calculate combination (nCr) using loops
int nCr(int n, int r) {
    if (r < 0 || r > n) {
        return 0;  // Invalid input for combination
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    // Input
    cout << "Enter two numbers (n and r): ";
    cin >> n >> r;

    // Calculate and display combination
    cout << "Combination (nCr) is: " << nCr(n, r) << endl;

    return 0;
}


// Key Points of Comparison:

// Recursion vs. Loop:
// In the initial code, recursion is used to calculate the factorial. The function calls itself until reaching the base case.
// In the modified code, a for loop is employed to iteratively calculate the factorial without using recursion.

// Base Case:
// In the recursive version, a base case is defined (when num is 0 or 1) to terminate the recursion.
// In the loop-based version, the loop runs from 1 to num, ensuring that the factorial is calculated iteratively.

// Readability and Conciseness:
// Recursive solutions are often more concise and resemble the mathematical definition closely.
// Loop-based solutions might be more explicit and readable for some programmers, especially for simple operations like factorial calculation.

// Efficiency:
// Recursive solutions may incur additional overhead due to function calls, potentially leading to higher memory consumption.
// Loop-based solutions are generally more efficient in terms of memory and can be faster for large values.