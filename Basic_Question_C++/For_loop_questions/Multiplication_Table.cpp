// multiplication table of n elements

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of table which you wnat to print: ";
//     cin>>n;

//     for(int i=1; i<=10; i++){



//         cout<<"The multiplication table of "<<n<< " is : "<<n*i<<endl;

//     }
//     return 0;
// }



// second approach


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of table which you wnat to print: ";
    cin>>n;

    for(int i=n; i<=10*n; i=i+n){
        cout<<"The multiplication table of "<<n<<" is : "<<i<<endl;
    }
    return 0;
}


