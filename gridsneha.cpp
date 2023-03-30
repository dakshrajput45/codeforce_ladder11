/*It’s time to play the tic tac toe. BUT, in a different way. Let’s jump on to the game.

Given a wooden piece, a grid containing n rows and m columns, each 1 x 1 square containing “O” written inside it. You can cut the original or any other rectangular piece obtained during the cutting into two new pieces along the grid lines. You will obtain a certain number of rectangle pieces after doing the cutting. 1 x 1 is a square, you cannot treat it as a rectangle.

You know how to put an “X” in place of an “O”.

Your task is to design each rectangular piece obtained in such a way that any pair of adjacent cells have different symbols.

Symbols: “X” and “O”

What would be the minimum number of cells you need to put an “X” on in an n x m grid to achieve the desired result?

Input

The first line contains a single integer t, the number of test cases. Description of the test cases is as follows:

The only line of each test contains exactly two integers n and m.

Constraints

1<=t<=500


1<=n<=5∗(104)


1<=m<=5∗(104)


n∗m>=2


Output

For each test case, print a single integer indicating the minimum number of cells you need to put an "X" on in an n x m grid.

Example

Input:

4
1 3
2 2
2 5
3 5

Output

1
2
4
5
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c = 0;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j < m; j++)
        {
            if (a[i][j]==0)
            {
                if (j != m - 1)
                {
                    if (a[i][j + 1] == 0)
                    {
                        c++;
                        a[i][j + 1] = 1;
                    }
                }

                /*if (i != 0)
                {
                    if (a[i - 1][j] == 0)
                    {
                        c++;
                        a[i - 1][j] = 1;
                    }
                }*/

                /*if (i != n - 1)
                {
                    if (a[i + 1][j] == 0)
                    {
                        c++;
                        a[i + 1][j] = 1;
                    }
                }*/

                if (j != 0)
                {
                    if (a[i][j - 1] == 0)
                    {
                        c++;
                        a[i][j - 1] = 1;
                    }
                }
            }
        }
    }
cout<<endl;
for(int x = 0; x < n; x++)
{
    for (int y = 0; y < m; y++)
        cout << a[x][y] << " ";
    cout << endl;
}
cout << c << endl;
return 0;
}