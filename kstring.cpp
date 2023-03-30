#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;

    string s;
    cin>>s;

    unordered_map<char,int> m;
    vector<char> v;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    
    for(auto i:m)
    {   
        if(i.second%n!=0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        for(auto &it: m)
        {
            for(int i=0;i<(it.second/n); i++)
            {
                v.push_back(it.first);
            }
        }
        while(n--)
        {
            for(int i=0;i<v.size();i++)
            cout<<v[i];
        }
    }
    else
    cout<<"-1"<<endl;
    return 0;
}