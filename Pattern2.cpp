#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n=5, j, c=0, c1=1;
    for(i=1; i<=n; i++)
    {
        for (j=1;j<=n-i; j++)
        {
            cout<<" ";
            c++;
        }
        for(j=0; j<i*2-1; j++)
        {
            if(c<=n-1)
            {
                cout<< i+j;
                c++;
            }
            else
            {
                cout<< (i+j)- 2*c1;
                c1++;

            }
        }
        c=0;
        c1=1;
        cout<<endl;
    }


    return 0;
}
