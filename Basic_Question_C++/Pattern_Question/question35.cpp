// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

    //         1
    //       2 1
    //     3 2 1
    //   4 3 2 1
    // 5 4 3 2 1 

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

        for(col=row; col>=1; col--){
           cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}