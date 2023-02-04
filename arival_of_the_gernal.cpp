#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=-1;
    cin>>n;

    int *a=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }  
    
    int max=a[0];
    int maxindex=0;
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            maxindex=i;
        }
    }
    int min=a[0];
    int minindex=0;
    for(int i=0;i<n;i++)
    {
        if(min>=a[i])
        {
            min=a[i];
            minindex=i;
        }
    }

    if(maxindex<minindex)
    {
        ans=maxindex+n-1-minindex;
    }

    else if(maxindex>minindex)
    ans=maxindex+n-2-minindex;

    cout<<ans<<endl;
    
    
    return 0;
}