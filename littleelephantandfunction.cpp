#include<bits/stdc++.h>
using namespace std;

/*void reverse(int a[],int x)
{
    if(x==1)
    return;

    else
    {
        swap(a[x-1],a[x-2]);
        reverse(a,x-1);
    }

}
int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=1;i<=n;i++)
    {
        a[i-1]=i;
    }
    reverse(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}*/
int main()
{
    int n;
    cin>>n;

    cout<<n<<" ";
    for(int i=1;i<n;i++)
    {
        cout<<i<<" ";
    }
    return 0;
}
