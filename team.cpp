#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,count=0;
    cin>>n;

    vector<vector<int>>team(n,vector<int>(3));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>team[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<3;j++)
        {
            if(team[i][j]==1)
            c++;
            if(c>=2)
            {
            count++;
            break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}