#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,sum=0,j=1;
    cin>>n>>m;

    long long int arr[n];
    for(long long int i=0;i<n;i++)
    cin>>arr[i];

    for(long long int i=0;i<n && j<=m;i++)
    {
        if(arr[i]<0)
        {
            sum=sum+arr[i];
            j++;
        }
    }
    cout<<j<<endl;
    cout<<abs(sum)<<endl;
    return 0;
}
/*#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, a[100];
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    int s(0);
    for (int i = 0; i < m; ++i)
    {
        if (a[i] >= 0)
        {
            break;
        }
        s += a[i];
    }
    cout << -s << endl;
    return 0;
}*/