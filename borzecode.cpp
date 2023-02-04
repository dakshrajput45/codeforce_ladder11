#include<bits/stdc++.h>
using namespace std;

int main()
{
    //borze code
    // <<.>>==0
    //<<-.>>==1
    //<<-->>==2

    string code;
    cin>>code;


    for(int i=0;i<code.length();i++)
    {
        if(code[i]=='.')
        cout<<"0";

        else if(code[i]=='-')
        {
            if(code[i+1]=='.')
            cout<<"1";

            else if(code[i+1]=='-')
            cout<<"2";

            i=i+1;
        }
    }
    return 0;
}