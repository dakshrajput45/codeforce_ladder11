#include<bits/stdc++.h>
using namespace std;

int main()
{
    string username;
    cin>>username;

    set<char> gender;
    for(int i=0;i<username.length();i++)
    {
        gender.insert(username[i]);
    }
    if(gender.size()%2==0)
    cout<<"CHAT WITH HER!";

    else
    cout<<"IGNORE HIM!";
    return 0;
}