#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[0]=='4')
        {
            cout<<"NO"<<endl;
            flag=1;
            break;
        }
        if(s.size()>3 && s[i]=='4' && s[i+1]=='4' && s[i+2]=='4')
        {
            cout<<"NO"<<endl;
            flag=1;
            break;
        }
        if(s[i]!='1' && s[i]!='4')
        {
            cout<<"NO"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}