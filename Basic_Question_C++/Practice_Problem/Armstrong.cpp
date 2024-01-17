// Armstrong of a number

// Sum of the cube of individual digit called armstrong number

#include<iostream>
using namespace std;
int main()
{
    int n, r, m, s =0;

    cout<<"Enter a number: ";
    cin>>n;

    m = n;

    while (n!=0)
    {
        r = n%10;
        s = s + (r*r*r);
        n = n/10;
    }
    if(m == s){

        cout<<"Number is Armstrong: "<<endl;

    }
    else{
        cout<<"Number is not Armstrong: "<<endl;
    }
        

    return 0;
}