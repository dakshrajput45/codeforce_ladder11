#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    long double sum=0,ans=-1;
    cin>>n;

    long long int *arr=new long long int[n];

    for(long long int i=0;i<n;i++)
    { 
        cin>>arr[i];
    }
    for(long long int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    long double divide=n*100;
    cout<<divide<<endl;
    long double ansdivide=sum/divide;
    cout<<ansdivide<<endl;
    ans=ansdivide*100;
    cout<<ans<<endl;

    return 0;
}