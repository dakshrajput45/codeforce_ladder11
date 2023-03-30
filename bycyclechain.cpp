#include<bits/stdc++.h>
using namespace std;

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,m,ans=0,c=0,max=0;
    cin>>n;

    int *pedal=new int[n];

    for(int i=0;i<n;i++)
    cin>>pedal[i];
    print(pedal,n);
    cin>>m;

    for(int i=0;i<m;i++)
    {
        int x;cin>>x;
        for(int j=0;j<n;j++)
        {
            cout<<x<<" ";
            cout<<endl;
            if(x%pedal[j]==0)
            {
                ans=x/pedal[j];
                if(max<=ans)
                {
                    c++;
                    cout<<ans<<" ";
                    if(max!=ans && max!=0)
                    c=0;
                    max=ans;
                }
            }
        }
    }
    cout<<endl;
    if(c==0)
    cout<<"1"<<endl;

    else
    cout<<c<<endl;

    return 0;
}