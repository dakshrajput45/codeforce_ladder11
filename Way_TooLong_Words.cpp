#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
    string word;
    cin>>word;

    cout<<word.length();
    if(word.length()>10)
    {
        cout<<word[0]<<word.length()-2<<word[word.length()-1]<<endl;
    }
    else
    cout<<word<<endl;;
    }
    return 0;
}