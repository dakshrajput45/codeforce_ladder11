#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,j,c=0;
    cin>>n>>m;
    int i=n+1;

for(int i=n+1;i<INT_MAX;i++)
{
    c=0;
    for(int j=2;j<=i;j++)
    {
        if(i%j==0)
        {
            c++;
        }   
    }
    if(c==1)
        {
            if(i==m)
            cout<<"YES"<<endl;

            else
            cout<<"NO"<<endl;
            break;
        }
}
    return 0;
} 
