#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r=0,le=0,u=0,lo=0,ans=0;
    cin>>n;

    vector<vector<int>> super((n),vector<int>(2));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>super[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        r=0,le=0,u=0,lo=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                 if(super[i][0]<super[j][0] && super[i][1]==super[j][1])
                    {
                        r++;
                    }
                 if(super[i][0]>super[j][0] && super[i][1]==super[j][1])
                    {
                        le++;
                    }
                 if(super[i][0]==super[j][0] && super[i][1]>super[j][1])
                    {
                        lo++;
                    }
                 if(super[i][0]==super[j][0] && super[i][1]<super[j][1])
                    {
                        u++;
                    }
            }
        }   
        if(r>=1 && le>=1 && u>=1 && lo>=1)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}