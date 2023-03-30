#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=2,c=1;
    cin>>n;

    string s;
    cin>>s;

    string d;
    cin>>d;

    while(s==d)
    {
        c++;
        string l;
        cin>>l;
        d=l;
        i++;
    }
    while(i<n)
    {
        string l;
        cin>>l;
        if(l==s)
        c++;  
        i++;  
    }
    if(c>(n-c))
    cout<<s<<endl;

    else
    cout<<d<<endl;

    return 0;
}