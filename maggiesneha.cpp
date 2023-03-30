#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,c=0,sum=0,flag=0;
    cin>>n>>q;

    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int y;cin>>y;
        arr.push_back(y);
    }

    sort(arr.begin(),arr.end(),greater<int>());

    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        flag=0;
        c=0;
        sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+arr[j];
            c++;
            if(sum>=x)
            {
                break;
            }
            if(j==n-1)
            flag=1;
        }
        if(flag==0)
        cout<<c<<endl;
        else
        cout<<"-1"<<endl;
    }
    return 0;
}