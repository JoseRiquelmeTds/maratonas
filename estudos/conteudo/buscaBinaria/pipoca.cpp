#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define in insert
#define pi pair<int, int>
#define pii pair<int, pi>
#define vi vector<int>
#define mp make_pair
#define fir first
#define sec second
#define MAXL 20
#define MAXN 50500

vi p;


bool comer(lli aposto, lli n,lli c,lli t)
{
    lli bucho = aposto * t;
    lli comp = 1;

    for (lli i = 0; i<n; i++)
    {
        if (p[i] > aposto * t) return false;
        if (bucho >= p[i])
        {
            bucho -= p[i];
        }
        else
        {
            bucho = aposto * t;
            comp++;
            i--;
        }
    }

    if (comp > c) return false;
    else return true;
}

signed main()
{
    lli n, c, t;
    cin >> n >> c >> t;
    for (lli i = 0; i<n; i++)
    {
        lli x; cin >> x;
        p.push_back(x);
    }

    lli l = 0, r = (lli)1e9+10;


    while (l < r)
    {
        lli mid = (l+r)/2;

        if (!comer(mid, n, c, t)) l = mid+1;
        else r = mid;
    }

    cout << r;
}