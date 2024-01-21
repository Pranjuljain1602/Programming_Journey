// Find maximum element of an array

#include<iostream>
#include <climits>

using namespace std;
int main()
{
    int arr[5] = {5,7,2,10,11};

    int ans = INT_MIN;

    for(int i =0; i<5; i++)
    {
        if(arr[i]>ans)
        {
            ans = arr[i];
        }
    }
        cout<<ans<<endl;

    return 0;
}