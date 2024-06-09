//Binary Search...........
#include<bits/stdc++.h>
using namespace std;
int Binary_search(int arr[], int beg, int End, int val)
{
    int pos=-1, mid;
    while(beg<=End)
    {
        mid=(beg+End)/2;
        if(arr[mid]==val)
        {
            pos=mid;
            return pos;
        }
        else if(arr[mid]>val)
        {
            End= mid-1;
        }
        else
            beg=mid+1;
    }
}
int main()
{
    int lb=0, ub, val;
    int arr[]= {1, 5, 7, 8, 9, 11, 15};
    ub =sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the search Item: ";
    cin>>val;
       int pos=Binary_search(arr, lb, ub-1, val);
    if(pos==-1)
        cout<<"Item not found"<<endl;
    else
        cout<<"Item found at position " <<pos<<endl;
    return 0;
}
