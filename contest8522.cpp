#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
    long long int x,y;
    cin>>x>>y;
 
    int len=abs(x)+abs(y);
    cout<<2*len<<endl;

    for(int i=1;i<=2*len;i++)
    {   
        if(i%2!=0)
        cout<<"0"<<" ";

        else
        {
            if(x)
            {
                cout<<"1"<<" ";
                x--;
            }
            else if(y)
            {
                cout<<"-1"<<" ";
                y++;
            }
        }  
    }
    cout<<endl;
    }
    return 0;
}