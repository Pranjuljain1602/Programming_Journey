// Binary to decimal conversion

#include<iostream>
using namespace std;
int main()
{
    int num, rem, mul=1, ans =0;

    cout<<"Enter a binary number: ";
    cin>>num;

    while (num>0)
    {
        rem = num%10;
        num /= 10;
        ans += rem*mul;
        mul *= 2;

    }

    cout<<"Decimal representation of the number: "<<ans;
    
    return 0;
}