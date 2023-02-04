#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin>>input;
    int flag=-1;
    for(int i=0;i<input.length();i++)
    {
        if(input[i]=='H'||input[i]=='Q'||input[i]=='9'||input[i]=='+')
        {
            cout<<"YES"<<endl;
            flag=0;
            break;
        }
    }
    if(flag==-1)
    cout<<"NO"<<endl;

    return 0;
}