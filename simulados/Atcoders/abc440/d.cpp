#include <bits/stdc++.h>

using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q; cin >> n >> q;

    vector <int> a;

    while (n--)
    {
        int x; cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());
    
    while (q--)
    {
        int x, y; cin >> x >> y;

        auto it = lower_bound(a.begin(), a.end(), x);

        int ans = x + y - 1;

        int b = it - a.begin();
        
        for (int i = b; i < a.size(); i++)
        {
            if(ans >= a[i])
            {
                ans++;
            }
            else
            {
                break;
            }
        }

        cout << ans << endl;
    }
} 