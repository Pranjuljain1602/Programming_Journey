// prime number 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(n<2){
        cout<<"Not primne ";
        return 0;
    }

    /* The `for` loop is iterating through all the numbers from 2 to `n-1`. It initializes `num` to 2,
    and then checks if `num` is less than or equal to `n-1`. If it is, the loop body is executed,
    and then `num` is incremented by 1. This process continues until `num` is no longer less than or
    equal to `n-1`. */
    for(int num = 2; num<=n-1; num++){
        if(n%num==0){
            cout<<"The number is not prime: ";
            return 0;
        }
    }
    
    cout<<"The number is Prime: ";
    return 0;
}