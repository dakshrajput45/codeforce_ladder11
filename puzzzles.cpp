#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ans=INT_MAX;
    cin>>n>>m;

    vector<int> v;
    vector<int> daksh;
    vector<int> :: iterator it;

    for(int i=0;i<m;i++)
    {
        int l;
        cin>>l;
        v.push_back(l);
    }
           
    for(int i=0;i<m;i++)
    {   
        daksh.push_back(v[i]);
        if(i>=n-1)
        {
            int max=*max_element(daksh.begin(),daksh.end());
            int min=*min_element(daksh.begin(),daksh.end());
            if(max-min<ans)
            {
                ans=max-min;
            }
            it=daksh.begin();
            daksh.erase(it);
        }
    }
    cout<<endl;
    cout<<ans;
    return 0;
}