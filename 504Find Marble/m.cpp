#include <iostream>
#include <deque>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,s,t;
    cin>>n>>s>>t;
    deque<ll>v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];
    for(ll i=0;i<=n;i++) {
        if(s==t) {
            cout<<i<<endl;
            return;
        }
        s=v[s];
    }
    cout<<-1<<endl;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}