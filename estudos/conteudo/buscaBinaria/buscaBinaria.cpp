#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(3);
    a.push_back(4);
    a.push_back(4);
    a.push_back(5);
    a.push_back(8);
    a.push_back(8);

    int n; cin >> n;

    cout << lower_bound(a.begin(), a.end(), n) - a.begin() << endl;
    cout << upper_bound(a.begin(), a.end(), n) - a.begin() << endl;
}