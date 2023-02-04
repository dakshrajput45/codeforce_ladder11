#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    char c;
    cin>>c;
    int flag=-1;
    
    string d={"codeforces"};
    for(int i=0;i<10;i++)
    {
        {
            if(c==d[i])
            {
            cout<<"YES"<<endl;
            flag=0;
            break;
            }
        }
    }
    
        if(flag==-1)
        cout<<"NO"<<endl;
    }
    return 0;
}