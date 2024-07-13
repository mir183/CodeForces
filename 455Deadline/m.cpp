#include <iostream>
#include<cmath>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,d;
    cin>>n>>d;
    if(d<=n){
        yes;
        return;
    }
    ll ans=LLONG_MAX;

    for(ll x=0;x<=n;x++){
        ll tot = x + ceil((double)d /(x + 1));
        if(tot<=n){
            yes;
            return;
        }
    }
    no;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}