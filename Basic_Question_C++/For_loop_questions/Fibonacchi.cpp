// Print n’th Fibonacci number.

#include<iostream>
using namespace std;
int main()
{
    int n, firstnumber = 0, secondnumber = 1, current = 0;

    cout<<"Enter fibonacci number: ";
    cin>>n;

    for(int i = 1; i<=n; i++){

        // print first number
        if(i==1){
            cout<<firstnumber<<", ";
            continue;
        }

        // print second number

        if(i==2){
            cout<<secondnumber<<", ";
            continue;
    }

    current = firstnumber + secondnumber;
    firstnumber = secondnumber;
    secondnumber = current;

    cout<<current<<", ";
}
     return 0;

}