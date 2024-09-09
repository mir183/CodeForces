#include <iostream>
#include<map>

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
    map<ll,ll> m;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        m[x]++;
    }
    ll left=0;
    ll cnt=0;
    for(auto [x,y]:m){
        y+=left;
        cnt+=y/x;
        left=y%x;
    }
    cout<<cnt<<endl;
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