#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int *arr=new int [n+1];

    list<int> can;
    for(int i=1;i<=n;i++)
    can.push_back(i);

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    while(can.size()>1)
    {
        int i=can.front();
        if(m<arr[i])
        {
            arr[i]=arr[i]-m;
            can.push_back(i);
            can.pop_front();
        }
        else
        can.pop_front();
    }
    cout<<can.back()<<endl;
    return 0;
}