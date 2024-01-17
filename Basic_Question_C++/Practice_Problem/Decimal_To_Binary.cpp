// Decimal to binary conversion

#include<iostream>
using namespace std;
int main()
{
    int num, rem, mul=1, ans =0;

    cout<<"Enter a decimal number: ";
    cin>>num;

    while (num>0)
    {
        rem = num%2;
        num /= 2;
        ans += rem*mul;
        mul *= 10;

    }

    cout<<"Binary representation of the number: "<<ans;
    
    return 0;
}