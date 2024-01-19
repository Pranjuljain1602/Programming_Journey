// 5: Print “Hello world” n times using Function.

#include<iostream>
using namespace std;


int hello(int n){
    for(int i =0; i<n; i++){
        cout<<"Hello World: "<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter a number of times which you would like to print: ";
    cin>>n;
    hello(n);
    return 0;
}