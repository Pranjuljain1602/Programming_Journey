// 4: Swap 2 numbers a, b without using extra variables. Range of 
// -10000<=a,b<=100000. 


#include<iostream>
using namespace std;

// Function to swap two numbers without using extra variables
void swapNumbers(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int a, b;

    // Input
    cout << "Enter two numbers (a, b): ";
    cin >> a >> b;

    // Display original values
    cout << "Original values: a = " << a << ", b = " << b << endl;

    // Call the function to swap values
    swapNumbers(a, b);

    // Display values after swapping
    cout << "Values after swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
