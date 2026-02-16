#include <bits/stdc++.h>
using namespace std;

#define lli unsigned long long int
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
    lli n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    lli q; cin >> q;
    while(q--){
        string w; cin >> w;
        bool flagfoda = false;
        for(auto c : w){
            bool flag1 = false;
            bool flag2 = false;
            flagfoda = false;
            for(auto cs : s){
                if (cs == c){
                    flag1 = true;
                }
            }
            for(auto ct : t){
                if (ct == c){
                    flag2 = true;
                }
            }
            if (flag1 != flag2)
            {
                if (flag1)
                {
                    cout << "Takahashi" << endl;
                }
                else
                {
                    cout << "Aoki" << endl;
                }
                flagfoda = true;
                break;
            }
        }

        if (!flagfoda) cout << "Unknown" << endl;
    }
}