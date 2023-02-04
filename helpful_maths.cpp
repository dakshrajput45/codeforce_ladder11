#include<bits/stdc++.h>
using namespace std;

int main()
{
    string mathsum;
    cin>>mathsum;
    string math;

    int *digit=new int[(mathsum.length()/2)];
    int j=0;
    for(int i=0;i<mathsum.length();i++)
    {
        if(i%2==0)
        {
            digit[j]=mathsum[i];
            j++;
        }
    }
    sort(digit,digit+(mathsum.length()/2+1));
    for(int i=0;i<mathsum.length()/2+1;i++)
    {
        math.push_back(digit[i]);
        if(i<mathsum.length()/2)
        math.push_back('+');
    }
    cout<<math<<endl;
    free(digit);
    return 0;
}