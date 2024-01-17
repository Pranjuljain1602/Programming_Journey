// 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<=1){
        cout<<"Not prime: ";
    }
    else{
       
       int num =2;
       while (num<=n-1)
       {
          if(n%num==0){
            cout<<"Not prime: ";
            break;
          }

          num++;
       }

       if(num>n-1){
        cout<<"Prime: ";
       }
       
    }
    
    return 0;
}