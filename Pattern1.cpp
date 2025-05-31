#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5, i, j;
    for(i=n; i>0; i--)
    {
        for(j=0; j<n-i; j++)
            cout<<" ";


        for(j=n-i+1; j<=n;j++)
            cout<<j;

        cout<<endl;
    }
    return 0;
}
