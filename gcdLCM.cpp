#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    int x1, y1;
    x1=x;
    y1=y;

    if(x==0)
        return y;
    else
        return gcd(y%x, x);
}
int main()
{
    int a, b, x, y, c;
    cout<<"Enter the two number: ";
    cin>>a>>b;
    c= gcd(a, b);
    cout<<"GCD value: "<<c<<endl;
    cout<<"LCM value: "<<(a*b)/c<<endl;
    return 0;
}
