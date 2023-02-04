#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    long long int n,j,i,vasya=0,petya=0;
    cin>>n;
 
    vector<long long int> vasyaa(100001);
    vector<long long int> patyaa(100001);
 
    vector<long long int> main(n+1);
    j=n;
    for(i=1;i<=n && j>=1;i++)
    {
        cin>>main[i];
        vasyaa[main[i]]=i;
        patyaa[main[i]]=j;
        j--;
    }
    long long int m;
    cin>>m;
 
    for( i=1;i<=m;i++)
    {
        long long int a;
        cin>>a;
        vasya+=vasyaa[a];
        petya+=patyaa[a];
    }
    cout<<vasya<<" "<<petya<<endl;
    
    return 0;
}