#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int resp = 0;

    while (n--)
    {
        int x; cin >> x;

        if (x != 1)
        {
            resp++;
        }

    }
    cout << resp;
}