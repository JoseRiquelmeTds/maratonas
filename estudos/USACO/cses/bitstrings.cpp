#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    int val = 1;

    while (n--)
    {
        val = (val * 2) % ((int)1e9 + 7);
    }

    cout << val;
}