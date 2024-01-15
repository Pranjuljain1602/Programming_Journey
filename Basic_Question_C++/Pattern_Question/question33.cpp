// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


    //          E
    //        E D
    //      E D C
    //    E D C B
    //  E D C B A

#include<iostream>
using namespace std;
int main()
{
    int n, row, col;

    cout<<"Enter the number: ";
    cin>>n;

    for(row=1; row<=n; row++){
        for(col=1; col<=n-row; col++){
            cout<<"  ";
        }

        for(col=1; col<=row; col++){
            char ch = 'E' - (col-1);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}
