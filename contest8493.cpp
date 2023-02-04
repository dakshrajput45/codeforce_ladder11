#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string d;
        cin>>d;
        bool f=0;
        int i=0;
        int j=0;
        for(int k=0;k<d.size();k++){
            if(d[k]=='U')
            j++;
            if(d[k]=='D')
            j--;
            if(d[k]=='R')
            i++;
            if(d[k]=='L')
            i--;
            if(i==1 && j==1)
            {
                cout<<"YES\n";
                f=1;
                break;
            }

        }
        if(f==0)
        cout<<"NO\n";
   }
}
