#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;

    int *arr=new int[7];
    for(int i=1;i<=7;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<=7;i++)
    {
        n=n-arr[i];
        if(n<=0)
        {
        ans=i;
        break;
        }

        if(i==7)
        {
            i=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}