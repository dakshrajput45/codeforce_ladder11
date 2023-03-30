#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    unordered_map <string,int> Umap;
    for (int i = 0; i < N; i++)
    {
        string A;
        cin >> A;
        Umap[A]++;
    }
    int Max=0;
    string Winner;
    for(auto &it : Umap)
    {
        if(it.second>Max)
        {
            Max=it.second;
            Winner=it.first;
        }
    }
    cout <<Winner;
}
