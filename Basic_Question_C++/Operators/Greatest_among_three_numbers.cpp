// 4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.


#include<iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout<<"Enter the fisrt number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;

    if(a>=b && a>=c){
        cout<<"first number is greatest: "<<a<<endl;
    }
    else if (a<=b && b>=c){
        cout<<"second number is greatest: "<<b<<endl;
    }
    else{
        cout<<" third number is greatest: "<<c<<endl;
    }
    return 0;
}