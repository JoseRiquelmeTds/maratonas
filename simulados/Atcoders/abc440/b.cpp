#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int, int>> horse;

    int n;
    cin >> n;
    int copy = n;

    while (n--)
    {
        int x;

        cin >> x;

        horse.push_back({x, copy - n});


    }

    sort(horse.begin(), horse.end());

    cout << horse[0].second  << ' ' << horse[1].second << ' ' << horse[2].second;
}