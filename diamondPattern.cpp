#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n=3, i, j;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=i*2-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=n-1; i>=1 ; i--)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=i*2-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
