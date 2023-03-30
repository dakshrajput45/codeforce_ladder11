//incomplete
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int seg=n;
    vector<int> v;
   
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }

    while(seg)
    {
        set<int> s;
        for(int i=1;i<=seg;i++)
        {
            if(v[i]<=seg)
            {
                s.insert(v[i]);
            }
            else
            {
                continue;
            }
        }
        if(s.size()==seg)
        {
            int min=*min_element(v.begin(),v.begin()+seg);
            int max=*max_element(v.begin(),v.begin()+seg);

            //if(v[1]!=)
        }
    }
    return 0;
}
