#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, c=1, k=1, c1=1;
    cout<<"Enter the row size: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
            c++;
        }
        for(j=0; j<i*2-1; j++)
        {
            if(c<=n)
            {
                cout<<i+j<<" ";
                c++;
            }
            else
            {
                cout<<i+j-2*c1<<" ";
                c1++;
            }
        }
        c=c1=1;
        cout<<endl;
    }
    return 0;
}
