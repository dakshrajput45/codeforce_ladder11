#include<bits/stdc++.h>
using namespace std;

int secondmin(int a[],int n)
{
    int min=a[0],ans=0;
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            ans=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[ans]==a[i])
        {
            a[i]=INT_MAX;
        }
    }
    a[ans]=INT_MAX;
    int min2=a[0];
    for(int i=1;i<n;i++)
    {
        if(min2>a[i])
        {
            min2=a[i];
        }
    }
    return min2;
}
int minindex(int a[],int n)
{
    
    int min=a[0],ans=0;
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            ans=i;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,min=0,type1=0,type2=0,flag=1,c=0;
        cin>>n;

        int *arr=new int[n];
    
        for(int i=0;i<n;i++)
        cin>>arr[i];

        while(c==n)
        {
            c=0;
            min=*min_element(arr,arr+n);
            if(min==1)
            {
                type2++;
                for(int i=0;i<n;i++)
                arr[i]-1;
            }
            else if(min>1)
            {
                type1++;
                arr[minindex(arr,n)]-1;     
            }
            else if(min==0)
            {
                min=secondmin(arr,n);
                if(min==1)
                    {
                        type2++;
                        for(int i=0;i<n;i++)
                        arr[i]-1;
                    }
                    else if(min>1)
                    {   
                        cout<<"chl"<<endl;
                        type1++;
                        arr[minindex(arr,n)]-1;     
                    }
            }
            for(int i=0;i<n;i++)
            {
                if(arr[i]==0)
                {
                    c++;
                }
            }
        }
        cout<<type1<<endl;

    }
    return 0;
}