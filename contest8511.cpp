#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=1,p1=1,p2=1;
    cin>>n;

    int *arr=new int[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<=n+1;i++)
    {
        if(k==2)
        {
        if(i<=k)
        p1=p1*arr[i];

        else if(i>k)
        p2=p2*arr[i];

        if(i==n && p1==p2)
        {
            cout<<p1<<" "<<p2;
            cout<<"2"<<endl;
            break;
        }
        if(i==n)
        {
            i=1;
            k++;
            p1=1;
            p2=1;
        }
        if(k>n-1)
        {
            cout<<"-1"<<endl;
            break;
        }
        }
    }

    return 0;
}