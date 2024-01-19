// 3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.


#include<iostream>
using namespace std;


int Swapa(int a){
    int b = a;
    return b;
}

int Swapb(int b){
    int c = b;
    return c;
}

int Swapc(int c){
    int a = c;
    return a;
}

int main()
{
    int a,b,c;
    cout<<"Enter the value a: ";
    cin>>a;
    cout<<"Enter the value b: ";
    cin>>b;
    cout<<"Enter the value c: ";
    cin>>c;

    cout<<"Now the valuse of a is: "<<Swapa(a)<<endl;
    cout<<"Now the valuse of b is: "<<Swapb(b)<<endl;
    cout<<"Now the valuse of c is: "<<Swapc(c)<<endl;
    return 0;
}