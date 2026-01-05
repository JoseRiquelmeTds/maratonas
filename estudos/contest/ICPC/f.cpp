#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d, c, r, tot = 0;

    cin >> d >> c >> r;

    queue<int> cansa;
    queue<int> descansa;
    while (c--)
    {
        int x; cin >> x;
        cansa.push(x);
    }
    while (r--)
    {
        int x; cin >> x;
        descansa.push(x);
    }

    while (!cansa.empty() || !descansa.empty())
    {
        if (!cansa.empty() && cansa.front() <= d)
        {
            d -= cansa.front();
            cansa.pop();
            tot++;
        }
        else if (!descansa.empty())
        {
            d += descansa.front();
            descansa.pop();
            tot++;
        }
        else
        {
            break;
        }
    }

    cout << tot;
}
