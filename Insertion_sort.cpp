//Insertion Sort...........
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={43, 31, 26, 29, 12};
    int i, j, item,n;
    n = sizeof(arr)/sizeof(arr[0]);
    for(i=1; i<n; i++)
    {
      item=arr[i];
      j=i-1;
      while(j>=0 && arr[j]>item)
      {
          arr[j+1]=arr[j];
          j--;
      }
      arr[j+1]=item;
    }

    cout<<"Sort array: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
