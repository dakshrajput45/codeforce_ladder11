#include<bits/stdc++.h>
using namespace std;

int uppercasecount(string s)
{
    int c=0;
    for(int i=0;i<s.length();i++)
    {
    if(s[i]>=65 && s[i]<=90)
    c++;
    }
    return c;
}
int main()
{
    string s;
    cin>>s;

    int n=s.length();
    int c=uppercasecount(s);
    if(n-c>c)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    else if(n-c==c)
    {      
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }

cout<<s<<endl;
    return 0;
}