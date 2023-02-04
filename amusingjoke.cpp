#include<bits/stdc++.h>
using namespace std;

int main()
{
    string santa;
    string newyear;
    string pile;
    cin>>santa>>newyear>>pile;
    int flag=0;

    cout<<santa.length()<<endl;
    cout<<newyear.length()<<endl;
    cout<<pile.length()<<endl;

    unordered_map<char,int> unmap;

    if(santa.length()+newyear.length()==pile.length())
    {
        for(int i=0;i<santa.length();i++)
        unmap[santa[i]]++;

        for(int i=0;i<newyear.length();i++)
        unmap[newyear[i]]++;

        for(int i=0;i<pile.length();i++)
        unmap[pile[i]]++;

        for(auto it:unmap)
        {
            if(it.second %2!=0)
            {
                flag=-1;
            }
        }
        if(flag==-1)
        cout<<"NO"<<endl;

        else
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}