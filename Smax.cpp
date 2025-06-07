//Second Maximum Number..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Max, smax=0, temp=0, arr[10]={5,9,7,2,6,11,3,1,12,4}, i, j;
    for(i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
    Max = arr[0];
    for(i=1; i<10; i++)
    {
       if(smax<arr[i])
       {
           smax = arr[i];
           if(smax>Max)
           {
              temp= smax;
              smax = Max;
              Max = temp;
           }
       }
    }
    cout<<endl;
    cout<<smax <<endl;
    return 0;
}
