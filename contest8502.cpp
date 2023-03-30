//hard version of contest8501
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;

    while(t--)
    {
        long long int n,r=1,alice=0,bob=0,alicew=1,aliceb=0,bobb=0,bobw=0,p=1,t=2;
        cin>>n;

        n=n-r;
        r++;
        while(n>=r)
        {
            if(p==1)
            {
                bob+=r;
                n=n-r;
                t+=r;
                r++;
                if(t%2==0)
                {
                bobw+=(bob/2);
                bobb+=(bob-bobw);
                }
                else
                {
                    bobb+=(bob/2);
                    bobw+=(bob-bobb);
                }

                if(n>=r)
                {
                    bob+=r;
                    n=n-r;
                    t+=r;
                    r++;
                    if(t%2==0)
                    {
                        bobw+=(bob/2);
                        bobb+=(bob-bobw);
                    }
                    else
                    {
                        bobb+=(bob/2);
                        bobw+=(bob-bobb);
                    }
                }
                else
                break;
                p=2;
            }
            else{  
                alice+=r;
                n=n-r;
                t+=r;
                r++;
                if(t%2==0)
                {
                alicew+=(bob/2);
                aliceb+=(bob-bobw);
                }
                else
                {
                    aliceb+=(bob/2);
                    alicew+=(bob-bobb);
                }
                if(n>=r)
                {
                     alice+=r;
                     n=n-r;
                     t+=r;
                     r++;
                    if(t%2==0)
                    {
                        alicew+=(alice/2);
                        aliceb+=(alice-alicew);
                    }
                    else
                    {
                        aliceb+=(alice/2);
                        alicew+=(alice-aliceb);
                    }
                }
                else
                break;
                p=1;
            }
        }
        /*
        if(bob%2==0)
        {
            bobw=(bob/2);
            bobb=(bob/2);
        }

        else if(bob%2!=0)
        {
            bobw=(bob/2);
            bobb=(bob-bobw);
        }

        if(alice%2==0)
        {
            alicew+=(alice/2);
            aliceb+=(alice/2);
        }

        else if(alice%2!=0)
        {
            aliceb+=(alice/2);
            alicew+=(alice-aliceb);
        }*/
        if(p==2)
        {
            if(t%2==0)
            {
                alicew+=(n/2);
                aliceb+=(n-n/2); 
            }
            else
            { 
                aliceb+=(n/2);
                alicew+=(n-n/2); 
            }
        }

        else
        {
            if(t%2==0)
            {
                bobb+=(n/2);
                bobw+=(n-n/2);
            }
            else
            { 
                bobw+=(n/2);
                bobb+=(n-n/2); 
            }
        }

        
        cout<<alicew<<" "<<aliceb<<" "<<bobw<<" "<<bobb<<endl;
    }
    return 0;
}