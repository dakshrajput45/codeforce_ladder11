#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,in,k,MAX=0,ans1=0,ans2=0,sum=0;
        cin>>n>>m>>k;

        vector<int> a;
        vector<int>:: iterator it1;
        vector<int>:: iterator it2;

        for(int l=0;l<n;l++)
        {
            cin>>in;
            a.push_back(in);
        }
        
        while(k--)
        {
            MAX=__gcd(a[0],a[1]);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(MAX<__gcd(a[i],a[j]))
                    {
                        MAX=__gcd(a[i],a[j]);
                        ans1=i;
                        ans2=j;
                    }
                }
            }
        }
        
        a.push_back(MAX);
        it1=a.begin()+ans1;
        it2=a.begin()+ans2-1;
        a.erase(it1);
        a.erase(it2);
        
        }
        for(int i=0;i<a.size();i++)
        {
            sum=sum+a[i];
        }

        cout<<sum<<endl;

    }
    return 0;
}