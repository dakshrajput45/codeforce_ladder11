#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,j,c=0;
    cin>>n>>a>>b;
    j=b;
    a++;
    while(a<=n)
    {
        b=j;
        while(b>=0)
        {
            if(n==(a+b))
            c++;
            b--;
        }
        a++;
    }
    cout<<c;
    return 0;
}