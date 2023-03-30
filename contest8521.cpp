#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int a,b,n,m,cost=0;
        cin>>a>>b>>n>>m;
        
        while(n>m)
        {
            if(n>m)
            {
                cost+=a*m;
                n=n-m-1;
            }
        }
            if(n<m)
            {
                if(a<b)
                {
                    cost+=n*a;
                    n=0;
                }
                else
                {
                    cost+=n*b;
                    n=0;
                }
            }
        cout<<cost<<endl;
    }
    return 0;
}