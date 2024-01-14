// Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    for(int i = 1; i <= number; i++){
        if(i%4==0){
       cout<<"Number which is divisible by 4 is: "<<i<<endl;
    }
    }
    return 0;
}
