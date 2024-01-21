// todo: Find fibonacchi number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number which you want to know the fibonacchi number: ";
    cin>>n;

    int arr[1000];

    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i<=n-1; i++ )

    arr[i] = arr[i-1] + arr[i-2];

    cout<<arr[n-1]<<" ";  // because if number is 7. The index of an is 6 (n-1)
    return 0;
}