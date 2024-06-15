#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll x;
    cin>>x;
    deque<ll>d(31,0);
    for(ll i=0;i<30;i++){
        if (1 & (x >> i)) {
            if (d[i]) {
                d[i + 1] = 1;
                d[i] = 0;
            } else if (i > 0) {
                if (d[i - 1] == 1) {
                    d[i + 1] = 1;
                    d[i - 1] = -1;
                } else {
                    d[i] = 1;
                }
            } else if (i == 0) {
                d[i] = 1;
            }
        }
    }
    cout<<31<<endl;
    for(auto i:d)
        cout<<i<<" ";
    cout<<endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}