#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,count=0,flag=0;
    cin>>n;

    long long int *score=new long long int[n];
    for(int i=0;i<n;i++)
    {
        cin>>score[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
        if(score[j]>score[i])
        {
            flag=-1;
        }
        else
        {
            flag=-2;
            break;
        }
        }
        if(flag==-1)
        count++;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
        if(score[j]<score[i])
        {
            flag=-1;
        }
        else
        {
            flag=-2;
            break;
        }
        }
        if(flag==-1)
        count++;
    }
cout<<count<<endl;
free(score);
    return 0;
}