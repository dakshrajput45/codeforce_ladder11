#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,maxpas=0,ans=-1;
    cin>>n;

    vector<vector<int>> tram(n,vector <int>(2));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>tram[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        maxpas=maxpas-tram[i][0]+tram[i][1];
        if(maxpas>ans)
        ans=maxpas;
    }
    cout<<ans<<endl;
    return 0;
}