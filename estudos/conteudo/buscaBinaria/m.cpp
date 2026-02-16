// PIPOCA ICPC 2019 SUBREGIONAL

// Primeiro é ordenado os saco de pipoca
// 0 6
// 3 seg

#include <bits/stdc++.h>

#define ll long long 
using namespace std; 
int n, c, t; 
vector<int> pipocas;

bool comer(ll m)
{
    int comp = 1;
    int resta = t*m;
    for (int i = 0; i<n;i++)
    {
        if (resta >= pipocas[i]) resta -= pipocas[i];
        else
        {
            comp++;
            resta = t*m;
        }
    }

    return (comp >= c);
}

int main()
{
    cin >> n >> c >> t;
    
    for(int i = 0; i<n;i++)
    {
        int x; cin >> x;
        pipocas.push_back(x);
    }
    
    int l = 0; int r = (int)1e9+10;
    int target;
    
    while (l < r)
    {
        int m = (l+r)/2;

        if (!comer(m)) l = m+1;
        if (comer(m)) r = m;
    }

    cout << r;
}