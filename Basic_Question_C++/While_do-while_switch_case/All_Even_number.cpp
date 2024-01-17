// 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

// Using while loop

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int i = 1;
//     while (i<=n)
//     {
//         if(i%2==0){
//             cout<<"Even number is: " <<i<<endl;
//         }
//         i++;
//     }
    
//     return 0;
// }


// using do-while

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    int i = 1;
    do
    {
        if(i%2==0){
            cout<<"Even number is: " <<i<<endl;
        }
        i++;
    } while (i<=n);
    
    return 0;
}