// 2: Reverse a number n using Function, Constraints: -5000<=n<=5000

// pass by refrence
#include<iostream>
using namespace std;

// Function to swap the values of three variables
void swapValues(int &a, int &b, int &c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a, b, c;

    // Input
    cout << "Enter three numbers (a, b, c): ";
    cin >> a >> b >> c;

    // Display original values
    cout << "Original values: a = " << a << ", b = " << b << ", c = " << c << endl;

    // Call the function to swap values
    swapValues(a, b, c);

    // Display values after swapping
    cout << "Values after swapping: a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}


// pass by value

// #include<iostream>
// using namespace std;

// // Function to swap the values of three variables using call by value
// void swapValues(int a, int b, int c) {
//     int temp = a;
//     a = b;
//     b = c;
//     c = temp;

//     // Display values inside the function
//     cout << "Inside the function: a = " << a << ", b = " << b << ", c = " << c << endl;
// }

// int main() {
//     int a, b, c;

//     // Input
//     cout << "Enter three numbers (a, b, c): ";
//     cin >> a >> b >> c;

//     // Display original values
//     cout << "Original values: a = " << a << ", b = " << b << ", c = " << c << endl;

//     // Call the function to swap values (call by value)
//     swapValues(a, b, c);

//     // Display values after the function call (original values should remain unchanged)
//     cout << "Values after the function call: a = " << a << ", b = " << b << ", c = " << c << endl;

//     return 0;
// }


// However, if the intention was to modify the original value of n inside the function and reflect that change outside the function, call by reference would be more appropriate. 
