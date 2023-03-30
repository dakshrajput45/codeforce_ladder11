#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b=0,ans=0;
    cin>>n>>m;

    for(a=0;a*a<=n && a<=m;a++)
    {
        b=n-a*a;
        if(b*b+a==m)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}