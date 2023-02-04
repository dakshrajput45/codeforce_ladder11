#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;

    while(t--)
    {
        int n,c=0;
        unordered_map<int,int> occur;
        cin>>n;
        vector<vector<int>> v(n,vector<int>(n-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cin>>v[i][j];
            }
        }
        int *arr=new int [n];
        for(int i=0;i<n;i++)
        {
            occur[v[i][0]]++;
        }
        
        int max=occur.begin()->second;
        arr[0]=occur.begin()->first;
        for(auto it: occur)
        {

            if(it.second>max)
            {
                arr[0]=it.first;
                max=it.second;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(v[i][0]!=arr[0])
            {
                for(int j=0;j<n-1;j++)
                {
                    arr[j+1]=v[i][j];
                }
                break;
            }
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

        cout<<endl;
    }
    return 0;
}