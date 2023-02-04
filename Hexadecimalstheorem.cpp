#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t=0;
    cin>>n;

    vector<long long int> v;
    long long int a=0,b=1,c=0;
    v.push_back(a);
    v.push_back(b);
    
    while(c<n)
    {
        c=a+b;
        v.push_back(c);
        a=b;
        b=c;
    }
    
    t=v.size();

    if(n==1)
    cout<<"1"<<" "<<"0"<<" "<<"0";

    else if(n==0)
    cout<<"0"<<" "<<"0"<<" "<<"0";

    else if(n==2)
    cout<<"0"<<" "<<"1"<<" "<<"1";

    else
    cout<<v[t-2]<<" "<<v[t-4]<<" "<<v[t-5];
    return 0;
}