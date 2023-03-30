#include<bits/stdc++.h>
using namespace std;

int index(int a[],int n)
{
    int max=a[1];
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            ans=i;
        }
    }
    return ans;
}

int checkzero(int a[],int n)
{
    for(int j=1;j<=n;j++)
    {
        if(a[j]!=0)
        {
            return 0;
        }
    }
    return 1;
}

void print(int a[],int n)
{
    for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int n,m,t=0,flag=0,c=0;
    cin>>n>>m;


    int *a=new int [n];
    for(int i=1;i<=n;i++)
    a[i]=0;

    int *arr=new int [n];
    for(int i =0;i<m;i++)
    {
       cin>>arr[i];
       a[arr[i]]++;
    }
while(flag==0)
{
    for(int j=1;j<=n;j++)
    {
        if(a[j]>0)
        {
            a[j]=a[j]-1;
        }
    }
    t++;
    if(t%2==0 && t!=0)
    {
        a[index(a,n)]=a[index(a,n)]-1;
    }

    if(checkzero(a,n))
    {
        break;
    }
}
    cout<<"ans="<<t<<endl;
    
    return 0;
}