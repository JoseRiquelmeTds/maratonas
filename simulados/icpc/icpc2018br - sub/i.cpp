#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    vector<bool> lamp(m, false);
    vector<vector<int>> inter(n);
    int ans = 0;
    bool flag = false;


    int l; cin >> l;

    while (l--)
    {
        int x; cin >> x;
        lamp[x-1] = true;
    }

    for (int i = 0; i < n; i++)
    {
        int a; cin >> a;

        while (a--)
        {
            int x; cin >> x;
            inter[i].push_back(x);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < n; j++)
        {
            flag = false;
            for (auto x: lamp)
            {
                if (x) flag = true;
            }
            if (flag == false) {cout << ans;  return 0;}

            for (auto x: inter[j])
            {
                lamp[x-1] = !lamp[x-1];
            }
            ans++;
        }
    }

    cout << "-1" << endl;
}