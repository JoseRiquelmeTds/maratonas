#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define in insert
#define pi pair<int, int>
#define pii pair<int, pi>
#define mp make_pair
#define fir first
#define sec second
#define MAXL 20
#define MAXN 50500

signed main(){
    lli p, q, x, y; cin >> p >> q >> x >> y;
    bool flag = false;
    if(x < p || y < q) flag = true;
    if(x > p + 99 || y > q + 99) flag = true;

    if (flag) cout << "No";
    else cout << "Yes";

}