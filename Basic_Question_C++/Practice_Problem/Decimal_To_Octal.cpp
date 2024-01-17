// Decimal to octal conversion

#include<iostream>
using namespace std;
int main()
{
    int num, rem, mul=1, ans =0;

    cout<<"Enter a decimal number: ";
    cin>>num;

    while (num>0)
    {
        rem = num%8;
        num /= 8;
        ans += rem*mul;
        mul *= 10;

    }

    cout<<"Octal representation of the number: "<<ans;
    
    return 0;
}