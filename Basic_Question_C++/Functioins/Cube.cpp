// 1: Find the cube of a number using Function. 


#include<iostream>
using namespace std;

int Cube(int n){
    int ans = n*n*n;
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Cube of a number is: "<<Cube(n)<<endl;
    return 0;
}