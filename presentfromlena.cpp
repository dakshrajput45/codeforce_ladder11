#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;

    k=n;
    for(int i=1;i<=n+1;i++)
    {
        while(k)
        {
            cout<<"  ";
            k--;
        }

        for(int j=0;j<i;j++)
        {
            if(j>0)
            cout<<" ";
            cout<<j;
        }

        if(i>1)
        {
            for(int j=i-2;j>=0;j--)
            {
                cout<<" "<<j;
            }
        }
        k=n-i;
        cout<<endl;
    }
    
    for(int i=n;i>0;i--)
    {
        k=n;
        while(k>=i)
        {
            cout<<"  ";
            k--;
        }

        for(int j=0;j<i;j++)
        {
            if(j>0)
            cout<<" ";
            cout<<j;
        }

        for(int j=i-2;j>=0;j--)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }

    return 0;
}
