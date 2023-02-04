#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans=-1;
    vector<vector<int>>v(5,vector<int>(5));
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>v[i][j];
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(v[i][j]==1)
            {
                ans=abs(2-i)+abs(2-j);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
