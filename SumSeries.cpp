#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1; i<= n; i++)
    {
        sum = sum + 1/float(i);
    }
    cout<<"Summation is: "<<sum<<endl;
    return 0;
}
