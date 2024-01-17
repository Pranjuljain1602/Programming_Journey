// 2: Find the factorial of a number n using a while loop and do a while loop.


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
    
//     int fact = 1;
//     int i =1;
//     while (i<=n)
//     {
//         fact = fact*i;
//         i++;
//     }
//     cout<<"Factorial of a given number is: "<<fact<<endl;
    
//     return 0;
// }


// Using do-while loop

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i =1;
    int fact =1;
    do
    {
        fact = fact*i;
        i++;
       
    } while (i<=n);

    cout<<"Factorial of a given number is: " << fact << endl;
    
    return 0;
}