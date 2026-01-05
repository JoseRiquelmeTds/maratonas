#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int tot = 0;

    int adj[n][n];
    int copy[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x; cin >> x;
            adj[i][j] = x;
            copy[i][j] = 0;
        }
    }
    
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][j] > adj[i][k] + adj[k][j])
                {
                    cout << -1 << endl;
                    return 0;
                }
            }
            
        }
    }   


        
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][j] == adj[i][k] + adj[k][j] && i != k && k != j)
                {
                    tot++;
                }   
            }
        }
    }   

    cout << tot/2 << endl;

}