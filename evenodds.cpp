#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,l,ans=0;
    cin>>n>>k;

    long long int j=0;
    if(n%2==0)
    { 
        if(k>n/2)
        {
            ans=2*(k-n/2);
        }
        else
        {
            ans=2*(k-1)+1;
        }
    }
    else
    {
        if(k>n/2+2)
        {
            ans=2*(k-n/2-1);
        }
        else
        {
            ans=2*(k-1)+1;
        }

    }

cout<<ans<<endl;
    
    return 0;
}