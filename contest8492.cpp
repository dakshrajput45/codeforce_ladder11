#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,c=0,d=0;
        cin>>n;

        string s;
        cin>>s;

        int i=0,e=n-1;
        c=n;
        d=n;
        while(s[i]!=s[e])
        {
            d=d-2;
            c=d;
            e--;
            i++;
            if(c==0)
            break;
        }
        cout<<c<<endl;
    }
    return 0;
}