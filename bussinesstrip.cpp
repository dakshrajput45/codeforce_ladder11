#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0,sum=0;
    cin>>n;

    vector<int> v(12);
    for(int i=0;i<12;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());

    for(int i=0;i<12;i++)
    {
        if(sum>=n)
        {
            break;
        }
        sum=sum+v[i];
        k++;
    }
    if(sum<n)
    cout<<"-1"<<endl;

    else
    cout<<k<<endl;
    return 0;
}