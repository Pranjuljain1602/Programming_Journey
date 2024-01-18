#include<iostream>
using namespace std;

bool Prime(int n)
{
    if(n < 2)
        return false;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int Fact(int n)
{
    int ans = 1;

    for(int i = 1; i <= n; i++) 
        ans *= i;
    
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    // a is prime or not
    cout << a << " is prime: " << (Prime(a) ? "true" : "false") << endl;

    // factorial of a
    cout << "Factorial of " << a << ": " << Fact(a) << endl;

    // b is prime or not
    cout << b << " is prime: " << (Prime(b) ? "true" : "false") << endl;

    // factorial of b
    cout << "Factorial of " << b << ": " << Fact(b) << endl;

    // b-a is prime or not
    int diff = b - a;
    cout << "Difference " << b << " - " << a << " is prime: " << (Prime(diff) ? "true" : "false") << endl;

    // factorial of b-a
    cout << "Factorial of " << b << " - " << a << ": " << Fact(diff) << endl;

    return 0;
}
