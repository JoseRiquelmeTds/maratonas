#include <bits/stdc++.h>
using namespace std;
// Minha ideia pra essa questão é bem simples, eu vou calcular simplesmente olhando se naquela distância minima, ainda dá pra colocar vaca
#define int long long int
#define pb push_back
#define in insert
#define pi pair<int, int>
#define pii pair<int, pi>
#define vi vector<int>
#define mp make_pair
#define fir first
#define sec second

vi stall;
int n, c; 

bool cabe(int chute)
{
    int idx = 0;                 // índice do celeiro atual
    int atual = stall[0];

    for (int i = 1; i < c; i++)
    {
        int tgt = atual + chute - 1;
        auto it = upper_bound(stall.begin() + idx + 1, stall.end(), tgt);
        if (it == stall.end()) return false;

        idx = it - stall.begin();
        atual = stall[idx];
    }
    return true;
}


signed main()
{
    int t; cin >> t;
    while (t--)
    {
        stall.clear();
        cin >> n >> c;

        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            stall.pb(x);
        }

        sort(stall.begin(), stall.end());

        int l = 0, r = stall.back() - stall.front();

        while (l < r)
        {
            int mid = (l + r + 1)/2;

            if (!cabe(mid)) r = mid-1;
            else
            {
                l = mid;
            }
        }

        cout << l;
    }
}