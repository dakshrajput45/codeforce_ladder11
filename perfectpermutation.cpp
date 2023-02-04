#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a=new int [n];

if(n%2==0)
{
    for(int i=1;i<=n;i++)
    {
        a[i]=i;
        a[i+1]=i+1;
        swap(a[i],a[i+1]);
        i=i+1;
    }
    for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
}
else
cout<<"-1"<<endl;

 free(a);
    return 0;
} 
