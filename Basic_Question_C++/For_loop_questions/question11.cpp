// Sum of n'th fibonacci elements

#include<iostream>
using namespace std;

int main() {
    int n, sum = 0, firstnumber = 0, secondnumber = 1, current = 0;

    cout << "Enter the number of Fibonacci numbers: ";
    cin >> n;

    if (n <= 0) {
        sum = 0;
    }

    /* The `for` loop is used to calculate the sum of the first `n` Fibonacci numbers. */
    for (int i = 1; i <= n; i++) {
        current = firstnumber;
        sum += current;
        firstnumber = secondnumber;
        secondnumber = current + secondnumber;
    }

// Let's understand with the example of n = 6
    /*

Initialization:
n = 6: We want to find the sum of the first 6 Fibonacci numbers.
sum = 0: Initialize the sum to 0.
firstnumber = 0: Initialize the first Fibonacci number.
secondnumber = 1: Initialize the second Fibonacci number.

Loop Iterations:
Iteration 1 (i = 1):
current = 0
sum += 0 (sum is now 0)
firstnumber = 1
secondnumber = 0 + 1 = 1

Iteration 2 (i = 2):
current = 1
sum += 1 (sum is now 1)
firstnumber = 1
secondnumber = 1 + 1 = 2

Iteration 3 (i = 3):
current = 1
sum += 1 (sum is now 2)
firstnumber = 2
secondnumber = 1 + 2 = 3

Iteration 4 (i = 4):
current = 2
sum += 2 (sum is now 4)
firstnumber = 3
secondnumber = 2 + 3 = 5

Iteration 5 (i = 5):
current = 3
sum += 3 (sum is now 7)
firstnumber = 5
secondnumber = 3 + 5 = 8

Iteration 6 (i = 6):
current = 5
sum += 5 (sum is now 12)
firstnumber = 8
secondnumber = 5 + 8 = 13

Result:
The loop ends after 6 iterations.
The sum of the first 6 Fibonacci numbers is 0 + 1 + 1 + 2 + 3 + 5 = 12.
    */

    cout << "The sum of the first " << n << " Fibonacci numbers is " << sum << endl;
    return 0;
}
