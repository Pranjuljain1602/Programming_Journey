#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {1,5,8,3,9,2};


    for(int i = 0; i<5; i++)
    {
        int index = i;

        for(int j =i+1; j<6; j++)
        {
            if(arr[j]>arr[index])
            index = i;
        }

        swap(arr[i], arr[index]);
    }

    for(int i = 0; i<6; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}