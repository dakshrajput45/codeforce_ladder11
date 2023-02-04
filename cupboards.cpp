#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,time=0,countl=0,countr=0;
    cin>>n;
    vector<vector<int>> v(n,vector<int> (2));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(v[i][0]==0)
        countl++;
        if(v[i][1]==0)
        countr++;
    }
    if(n-countl>countl)
    time=countl;
    else
    time=n-countl;

    if(n-countr>countr)
    time=time+countr;
    else
    time=time+n-countr;
    cout<<time<<endl;

    return 0;
} // namespace std;
