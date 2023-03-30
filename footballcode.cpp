#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag=0;
    cin>>s;

    if(s.length()<7)
    cout<<"NO";

    else
    {
    for(int i=0;(s.length()-i>=7);i++)
    {
        flag=0;
        for(int j=i;j<7;j++)
        {
            if(s[i]!=s[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        break;
    }
    if(flag==1)
    cout<<"NO";

    else
    cout<<"YES";
    }
    return 0;
}