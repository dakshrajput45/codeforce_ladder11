#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,s,r;
        cin>>n>>s>>r;

        int *arr=new int [n];
        arr[0]=s-r;

        for(int i=n-1;i>=1;i--)
        {
            arr[n-i]=r/i;
            r=r-arr[n-i];
        }   
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;

}