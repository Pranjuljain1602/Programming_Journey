// Binary to octal conversion

#include<iostream>
using namespace std;
int main()
{
    int num, rem, mul=1, octal =0, place = 1, ans =0;

    cout<<"Enter a binary number: ";
    cin>>num;

    while (num>0)
    {
        rem = num%10;
        num /= 10;
        ans += rem*mul;
        mul *= 2;

    }

    // Decimal to octal

    while(ans>0){
        rem = ans % 8;
        octal += rem * place;
        ans /= 8;
        place *= 10;
    }

    cout<<"Octal representation of the number: "<<octal<<endl;
    
    return 0;
}