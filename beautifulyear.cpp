#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,d,j,flag=0;
    cin>>x;

//can be done by array frequency count 
//can be done by unorderd map
//can be done by hash map(atta hai to krle) 
//can be done using set
/*
    for(int i=x+1;i<INT_MAX;i++)
    {
        int n=i;//unordered_map<int,int> distict;
        int frequency[10]={0};
        flag=0;
        while(n)              
        {
        d=n%10;
        frequency[d]++;//distinct[d]++;
        n=n/10;
        }
        for(int j=0;j<10;j++)   //for(auto& it: distinct)
        {
            if(frequency[j]>=2) //if(it.second>=2)
            flag=1;             //flag=1;
        }
        if(flag==0)
        { 
        cout<<i<<endl;
        break;
        }
    }
    */
   for(int i=x+1;i<INT_MAX;i++)
   {
        int n=i;//unordered_map<int,int> distict;
        set<int> s;          //int frequency[10]={0}
        while(n)              
        {
        d=n%10;
        s.insert(d);//distinct[d]++;
        n=n/10;
        }
        if(s.size()==4)
        {
            cout<<i<<endl;
            break;
        }
   }
    return 0;
}