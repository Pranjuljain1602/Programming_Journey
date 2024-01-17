// Addition of individual digit

#include<iostream>
using namespace std;
int main()
{
    int n, r, sum =0;

    cout<<"Enter a number which you want to find the sum of the digits: ";
    cin>>n;

    while (n!=0) 
    {
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    cout<<"The sum of the digits of the number is: "<<sum<<endl;
     
    return 0;
}