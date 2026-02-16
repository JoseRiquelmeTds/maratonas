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
        int x; cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());

    for (lli i = 0; i < k; i++)
    {
        v.pop_back();
    }

    

    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        ps.push_back(sum);
    }
    
    lli l = 1, r = n;

    while (l < r)
    {
        int mid = (l + r)/2;

        if (!bebeu(mid)) l = mid+1;
        else {
            r = mid;
            flag = true;
        }
    }

    if (flag || bebeu(r)) cout << r;
    else cout << "-1";

}