#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3],b[3][3]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]%2!=0)
            {
                if(b[i][j]==1)
                 b[i][j]=0;
                else
                 b[i][j]=1;

                if(i!=2)
                {
                if(b[i+1][j]==1)
                 b[i+1][j]=0;
                else
                 b[i+1][j]=1;
                }

                if(j!=2)
                {
                if(b[i][j+1]==1 )
                 b[i][j+1]=0;              //i=0 and j=3 is accesing i=1 and j=0
                else                       //now ok
                {
                 b[i][j+1]=1;
                }
                }

                if(i!=0)
                {
                if(b[i-1][j]==1)
                 b[i-1][j]=0;
                else
                 b[i-1][j]=1;
                }

                if(j!=0)
                {
                if(b[i][j-1]==1)
                 b[i][j-1]=0;
                else
                 b[i][j-1]=1;
                }
            }
        }
    }for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(b[i][j]==1)
            {
                b[i][j]=0;
            cout<<b[i][j];
            }
            else{
                b[i][j]=1;
            cout<<b[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}