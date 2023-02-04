#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,ans=0,flag=-1;
    cin>>n;

    long long int *sneha=new long long int [n];
    unordered_map<long long int,long long int> daksh;
    vector<long long int> v;
    for(long long int i=0;i<n;i++)
    {
    cin>>sneha[i];
    daksh[sneha[i]]++;
    }
    for(auto it:daksh)
    {
        if(it.second>1)
        {
            long long int e=it.first;
            v.push_back(e);
        }
    }

    long long int min=sneha[0];
    for(long long int i=1;i<n;i++)
     {
        if(min>sneha[i])
            {
                min=sneha[i];
                ans=i;
            }
    }
    
    for(int j=0;j<v.size();j++)
    {
        if(v[j]==min)
        {
            flag=0;
        }
    }    

    if(flag==-1)
    cout<<ans+1<<endl;


    else if(flag==0)
    cout<<"Still Rozdil"<<endl;
    
    return 0;
}
