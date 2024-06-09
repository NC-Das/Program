#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, temp;
    int arr[]={41, 31, 26, 21, 12};
    n = sizeof(arr)/sizeof(arr[0]);

    for(i=0; i< n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"Sort array: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
