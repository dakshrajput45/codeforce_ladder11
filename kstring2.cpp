#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string S;
    cin >> S;
    unordered_map<char, int> Umap;
    for (int i = 0; i < S.length(); i++)
    {
        Umap[S[i]]++;
    }

    int flag = 0;
    int Index;
    for (auto &it : Umap)
    {
        if (it.second % k != 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << -1;
    else
    {
        string Semi = "";
        for (auto &it : Umap)
        {
            for (int i = 0; i < (it.second / k); i++)
            {
                Semi += it.first;
            }
        }
        string Answer="";
        for (int i = 0; i < k; i++)
        {
            Answer+=Semi;
        }
        cout << Answer;
    }
}