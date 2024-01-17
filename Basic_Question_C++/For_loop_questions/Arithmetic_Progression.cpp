// There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.


#include<iostream>
using namespace std;
int main()
{
    int FirstNumber = 220;
    int Difference = 7;
    int EndNumber = 730;

    for(FirstNumber; FirstNumber<=EndNumber; FirstNumber+=Difference){
        cout<<FirstNumber<<" ";
    }
    return 0;
}