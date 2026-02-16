#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m;
vector<ll> city;
vector<ll> tower;

bool check(ll radio)
{
    ll at = 0;
    for (ll i = 0; i < n; i++)
    {
        if (at > m) return false;
        if (tower[at] > city[i])
        {
            if (tower[at] - city[i] > radio)
            {
                at++;
                i--;
            }
        }
        else if (tower[at] <= city[i])
        {
            if (-tower[at] + city[i] > radio)
            {
                at++;
                i--;
            }
        }
    }
    return true;
}

int main()
{
    cin >> n >> m;


    for (ll i = 0; i < n; i++)
    {
        ll x; cin >> x;
        city.push_back(x);
    }
    for (ll i = 0; i < m; i++)
    {
        ll x; cin >> x;
        tower.push_back(x);
    }

    ll l = 0, r = 1e18;

    while (l<r)
    {
        ll mid = l + (r-l) /2;

        if (!check(mid)) l = mid+1;
        else
        {
            r = mid;
        }
    }

    cout << r << endl;
}