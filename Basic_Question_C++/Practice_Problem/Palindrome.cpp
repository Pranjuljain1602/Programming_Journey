// Palindrome of a number

#include<iostream>
using namespace std;
int main()
{
    int n, r, m, sum =0;

    cout<<"Enter a number: ";
    cin>>n;

    m = n;
    while (n!=0)
    {
        r = n%10;
        sum = sum*10 + r;
        n = n/10;
    }

    if(m == sum){
        cout<<"number is Palindrome:  "<<endl;
    }
    else{
        cout<<"number is not Palindrome: "<<endl;
    }
    
    return 0;
}