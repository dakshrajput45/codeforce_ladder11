#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n ,ans=INT_MAX,f,l;
    cin>>n;
 
    long long int *arr=new long long int[n+1];
 
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
 
    for(int i=1;i<=n;i++)
    {
        if(i==n)
        {
         if(ans>abs(arr[i]-arr[1]))
            {
                ans=abs(arr[i]-arr[1]);
                f=i;
                l=1;
                break;
            }
        }
        if(ans>abs(arr[i]-arr[i+1]))
            {
                ans=abs(arr[i]-arr[i+1]);
                f=i;
                l=i+1;
            }
    }
    cout<<f<<" "<<l;
    return 0;
}
