#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    string r;
    cin>>r;

    reverse(s.begin(),s.end());
    if(r==s)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}