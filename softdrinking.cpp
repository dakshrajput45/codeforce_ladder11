#include<bits/stdc++.h>
using namespace std;

int main()
{
    int f,b,d,l,sl,st,fd,fst;
    cin>>f>>b>>d>>l>>sl>>st>>fd>>fst;
    int toast=0;

    toast=(b*d)/(f*fd);

    if(toast>(l*sl)/f)
    toast=(l*sl)/f;

    if(toast>st/(f*fst))
    toast=st/(f*fst);

    cout<<toast<<endl;
    return 0;
}