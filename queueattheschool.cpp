#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,t1=0;
    cin>>n>>t;

    string queue;
    cin>>queue;

    cout<<queue<<endl;
    
        for(int j=0;t1!=t;j++)
        {
            if(queue[j]=='B' && queue[j+1]=='G')
            {
                queue[j]='G';
                queue[j+1]='B';
                j=j+1;
            }
            if(j==n-1)
            {
                j=-1;
                t1++;
                cout<<t1<<endl;
            }
        }
    cout<<queue<<endl;
    return 0;
}