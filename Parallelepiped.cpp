#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a1,a2,a3,n,ans;
    cin>>a1>>a2>>a3;

    int l,b,h;
    n=sqrt(a1*a2*a3);
    l=n/a1;
    b=n/a2;
    h=n/a3;

    cout<<n<<endl;
    cout<<l<<" "<<b<<" "<<h<<endl;
    ans=4*(l+b+h);
    cout<<ans;
    return 0;
}