#include<iostream>
using namespace std;


int sum(int m, int n)  // Funtion declaration
{
     int ans = m + n;   // Funtion Definition
     return ans;
}

int main()
{
    int a, b;

    cout<<"Enter 2 numbers: ";
    cin>>a>>b;

    cout<<"Addition of 2 number is: "<<sum(a,b);  // Funtion call
    cout<<endl;
    return 0;
}