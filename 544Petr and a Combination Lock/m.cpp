#include <iostream>
#include <vector>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
ll n;
vector<ll> v;

bool ok(ll index, ll sum){
    if(index==n){
        if(sum%360==0) return true;
        return false;
    }
    return ok(index+1,sum+v[index]) || ok(index+1,sum-v[index]);
}

void solve() {
    // Your code here
    // ll n;
    cin>>n;
    // vector<ll> v(n);
    v.resize(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    if(ok(0,0))yes;
    else no;

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