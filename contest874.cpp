#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    string pie;
    cin>>pie;
    int c=0;

    string p={"3141592653589793238462643383279"};

    for(int i=0;i<pie.length();i++)
    {
        if(pie[i]==p[i])
        c++;
        else
        break;
    }
    cout<<c<<endl;
    }
    return 0;
}
