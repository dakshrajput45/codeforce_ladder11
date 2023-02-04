#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,ans=0,flag=0;
    cin>>n;

    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
       sum+=arr[i];
    }

    for(int i=1;i<=5;i++)
    {
        flag=0;
        sum=sum+i;
        for(int j=1;j<=5;j++)
        {
            if(sum==(n+1)*j+1)
             {
                 flag=-1;
                 break;
             }
        }
        if(flag==0)
        {
            ans++;
        }
        sum=sum-i;
    }
    cout<<ans<<endl;
    return 0;
}