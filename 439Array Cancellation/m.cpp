#include <iostream>
#include<deque>
#include<numeric>
#include<algorithm>
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
    deque<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    reverse(v.begin(),v.end());
    deque<ll>suf(n+1,0);
    for(ll i=1;i<=n;i++){
        suf[i]=suf[i-1]+v[i-1];
    }
    // cout << "ANS: ";
    cout << *max_element(suf.begin(), suf.end()) << endl;
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