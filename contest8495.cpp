#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,q,l,r,x,d,rem,sum=0,d2;
        cin>>n>>q;

        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int j=0;j<q;j++)
        {
            
        int form;
        cin>>form;
        if(form==1)
        {
            cin>>l;
            cin>>r;
            sum=0;
            d=a[l];
            while(d)
            {
                rem=d%10;
                sum=sum+rem;
                d=d/10;
            }
            a[l]=sum;
            sum=0;
            d2=a[r];
            while(d)
            {
                rem=d%10;
                sum=sum+rem;
                d=d/10;
            }
            a[r]=sum;
        }
        else
        {
             cin>>x;
             cout<<a[x]<<endl;
        }
        }
    }
    return 0;
}