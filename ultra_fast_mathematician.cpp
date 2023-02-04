#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,o,ans;
    cin>>s;
    cin>>o;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==o[i])
        {
            ans.push_back('0');
        }
        else
        ans.push_back('1');
    }
    cout<<ans<<endl;
    return 0;
} 
