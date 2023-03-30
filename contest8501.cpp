#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n,r=1,alice=1,bob=0,p=1,t=1;
        cin>>n;

        n=n-r;
        r++;    
        while(n>=r)
        {
            if(p==1)
            {
                bob+=r;
                n=n-r;
                r++;

                if(n>=r)
                {
                    bob+=r;
                    n=n-r;
                    r++;
                }
                else
                break;
                p=2;
            }
            else{   
                alice+=r;
                n=n-r;
                r++;

                if(n>=r)
                {
                     alice+=r;
                     n=n-r;
                     r++;
                }
                else
                break;
                p=1;
            }
        }
        if(p==2)
        alice+=n;

        else
        bob+=n;
        cout<<alice<<" "<<bob<<endl;
    }
    return 0;
}
