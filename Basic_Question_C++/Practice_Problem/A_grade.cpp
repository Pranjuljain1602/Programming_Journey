// The total number of students in a class are 45 out of which 25 are boys. If 80% of the total students secured grade 'A' out of which 17 are boys, then write a program to calculate the total number of girls getting grade 'A'.

#include<iostream>
using namespace std;
int main()
{
    int total, b, g;

    b = 17;
    total = (80*45)/100;

    g = total - b;

    cout<<"Number of girls getting grade 'A': "<<g<<endl;
    return 0;
}