#include <iostream>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin>>n;
    ll a=0,b=0;
    bool flag = true;
    for(ll i=0;i<n;i++) {
        ll x,y;
        cin>>x>>y;
        if(x<y) flag = false;
        if(x<a || y<b || x-a<y-b) flag = false;
        a=x;
        b=y;
    }
    if(flag) yes;
    else no;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}