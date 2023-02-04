#include<bits/stdc++.h>
using namespace std;

int suming(int a[],int n,int i)
{
    int news=0;
    a[i]=-a[i];
    a[i+1]=-a[i+1];
    for(int j=0;j<n;j++)
    {
        news=news+a[j];
    }
    return news;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,sum=0,news=0;
        cin>>n;

        int a[n],b[n];
        vector<int> c;
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        c.push_back(sum);
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n;j++)
            {
                b[j]=a[j];
            }
            news=suming(b,n,i);
            c.push_back(news);
        }
        
        sum=*max_element(c.begin(),c.end());
        cout<<sum<<endl;
    }
    return 0;
}