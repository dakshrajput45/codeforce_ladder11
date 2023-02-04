#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,add=0,sub=0;
    cin>>n;

    vector<vector<char>> bit((n),vector<char>(3));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>bit[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(bit[i][j]=='+')
            {
                add++;
                break;
            }
            else if(bit[i][j]=='-')
            {
                sub++;
                break;
            }
        }
    }
    cout<<add<<endl;
    cout<<sub<<endl;
    cout<<abs(add-sub)<<endl;
    return 0;
}