#include<bits/stdc++.h>
using namespace std;

int amax(vector<int> a,int n)
{
    int ans=1;
    int min=a[1];
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            ans=i;
        }
    }
    return ans;
}
int main()
{
    int s,n,flag=0,min=0;
    cin>>s>>n;
                
    vector<int> x;   
    vector<int> y;
        
    for(int i=0;i<n;i++)
    {
        int l,m;
        cin>>l>>m;
        x.push_back(l);
        y.push_back(m);
    }
    while(n--)
    {       
        min=amax(x,n);
        n--;    
    vector<int> :: iterator it;
    vector<int> :: iterator itt;    

        it=x.begin()+min; 
        itt=y.begin()+min;
        
        cout<<min<<endl;
        cout<<x[min]<<endl;
        cout<<y[min]<<endl;
        
        if(s>x[min])
        s=s+y[min];

        else
        {
            flag=1;
            break;
        }
        x.erase(it);
        y.erase(itt);
    }
    if(flag==0)
    cout<<"YES";

    else
    cout<<"NO";

    return 0;
}
