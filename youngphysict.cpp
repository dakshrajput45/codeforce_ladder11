#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum1=0,sum2=0,sum3=0;
    cin>>n;

    vector<vector<int>>v(n,vector<int>(3));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>v[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        sum1=sum1+v[i][0];
        sum2=sum2+v[i][1];
        sum3=sum3+v[i][2];
    }

    if(sum1==0&&sum2==0&&sum3==0)
    {
       cout<<"YES"<<endl;
    }
    else{
       cout<<"NO"<<endl;
    }

    return 0;
}
