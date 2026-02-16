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
lli n, k, x;
vector<lli> v;
vector<lli> ps;

bool bebeu(lli chute){
    lli agua;
    lli sake;
    sake = ps[n - chute - 1];
    agua = ps[n - 1];

    if (sake - agua >= x) return true;
    else return false;
}

signed main(){
    cin >> n >> k >> x;
    bool flag = false;
    for(int i = 0; i < n; i++){
        lli x; cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());

    for (lli i = 0; i < n-k; i++)
    {
        v.pop_back();
    }

    sort(v.begin(), v.end(), greater<long long>());

    lli sum = 0;
    for (lli i = 0; i < k; i++)
    {
        sum += v[i];
        if (sum >= x)
        {
            cout << i+1+n-k;
            return 0;
        }
    }
    cout << "-1";
    return 0;

}