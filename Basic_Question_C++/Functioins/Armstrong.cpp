#include<iostream>
#include<cmath>
using namespace std;

int digitcount(int n){
    int count = 0; // Initialize count to 0
    while(n){
        count++;
        n /= 10;
    }
    return count;
}

bool Armstrong(int num, int digit){
    int n = num, ans = 0, rem;

    while(n){
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem, digit);
    }

    if(ans == num)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int digit = digitcount(num);

    cout << Armstrong(num, digit) << endl;
    return 0;
}
