#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,sum=0,flag=-1;
    cin>>n;

    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==5)
        c++;
        sum=sum+arr[i];
    }

    if(c!=n)
    {
        if(sum%9==0 && sum!=0)
        {
            for(int i=0;i<c;i++)
            cout<<"5";

            for(int i=0;i<n-c;i++)
            cout<<"0";
        }

        else if(sum==0)
        cout<<"0"<<endl;
        
        else
        {
            int d=c;
            while(sum%9!=0)
            {
                sum=sum-5;
                c--;
                if(sum==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==-1)
            {
            for(int i=0;i<c;i++)
            cout<<"5";

            for(int i=0;i<n-d;i++)
            cout<<"0";
            }
            else
            cout<<"0"<<endl;

        }
    }
    else
    cout<<"-1"<<endl;
    return 0;
}