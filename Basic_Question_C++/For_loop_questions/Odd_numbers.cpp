// Print all Odd numbers from 1 to n, take n as an input from the user.


#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    for(int i=1; i<=number; i++){
        if(i%2==1){
            cout<<"odd number is: "<<i<<endl;
        }
    }
    return 0;
}