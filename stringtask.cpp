#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,ans;
    cin>>s;

    transform(s.begin(),s.end(),s.begin(),::tolower);

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='y'||s[i]=='A' || s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='E'||s[i]=='Y')
        {
            
        }
        else
        {
            ans.push_back('.');
            ans.push_back(s[i]);
        }
    }
    cout<<ans;
    return 0;
} 

