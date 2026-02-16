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
    lli n, m, l, s, t; cin >> n >> m >> l >> s >> t;
    vector<pi> adj[n];
    while(m--){
        lli v, u, c; cin >> v >> u >> c;
        adj[v].pb({u, c});
    }

}