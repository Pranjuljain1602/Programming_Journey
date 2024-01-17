// Octal to Binary conversion

#include<iostream>
using namespace std;
int main()
{
    int num, rem, mul=1, binary =0, place = 1, ans =0;

    cout<<"Enter a binary number: ";
    cin>>num;

    while (num>0)
    {
        rem = num%10;
        num /= 10;
        ans += rem*mul;
        mul *= 8;

    }

    // Decimal to binary representation

    while(ans>0){
        rem = ans % 2;
        binary += rem * place;
        ans /= 2;
        place *= 10;
    }

    cout<<"Binary representation of the number: "<<binary<<endl;
    
    return 0;
}