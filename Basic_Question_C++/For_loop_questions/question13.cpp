// Calculate the power of number

#include<iostream>
using namespace std;
int main()
{
    int n, pow, num;

    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Enter the power of number: ";
    cin>>pow;

    num = n;

    for(int i =1; i <pow; i++){
       num = num*n;
    }

    cout<<"Power of the number is: "<<num<<endl;
    return 0;
}

