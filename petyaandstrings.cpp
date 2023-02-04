#include<bits/stdc++.h>
using namespace std;

int main()
{
    string first;
    string second;
    cin>>first;
    cin>>second;

    transform(first.begin(),first.end(),first.begin(),::tolower);
    transform(second.begin(),second.end(),second.begin(),::tolower);
    

    if(first>second)
    {
        cout<<"1"<<endl;
    }
    else if(second>first)
    cout<<"-1"<<endl;

    else if(second==first)
    cout<<"0"<<endl;

    return 0;
}