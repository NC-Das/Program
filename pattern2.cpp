/*  *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *     */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n=5;
    for(i=0; i<n; i++)
    {
        for(j=n-i-1; j>0; j--)
        {
            cout<<" ";
        }
        for(j=0; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(i=n-1; i>0; i--)
    {
        for(j=n-i; j>0; j--)
        {
            cout<<" ";
        }
        for(j=0; j<i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
