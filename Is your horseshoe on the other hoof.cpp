#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *shoe=new int[4];
    set <int> hoof;
    for(int i=0;i<4;i++)
    {
       cin>>shoe[i];
       hoof.insert(shoe[i]);
    }
    int count=hoof.size();
    cout<<4-count<<endl;
    return 0;
}