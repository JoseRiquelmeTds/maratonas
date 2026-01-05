#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; int h; int pode = 0;
    cin >> n >> h;

    while (n--)
    {
        int x; cin >> x;

        if (h>=x)
        {
            pode++;
        }
    }

    cout << pode << endl;
}