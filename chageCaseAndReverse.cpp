#include<bits/stdc++.h>
using namespace std;

void chageCaseAndReverse(string str)
{
    int n= str.length();
    cout<<n<<endl;
    int i=0;
    while(str[i]!=0)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
        else
            str[i]= str[i]-32;
        i++;
    }
    cout<<str<<endl;
    for(i=0; i<n/2; i++)
        swap(str[i], str[n-i-1]);
    cout<<str<<endl;
}

int main()
{
    string s="HelloThere";
    cout<<s<<endl;
    chageCaseAndReverse(s);
    return 0;
}
