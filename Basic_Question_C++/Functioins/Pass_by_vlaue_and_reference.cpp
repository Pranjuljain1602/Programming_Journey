#include<iostream>
using namespace std;

void Swap(int &x, int &y){  // pass by reference

    int c;
    c = x;
    x = y;
    y = c;
}

int main()
{
    
    int a,b;

    cout<<"Enter 2 number: ";
    cin>>a>>b;

    Swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}