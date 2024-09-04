#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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
    // vector<ll> v(n);
    // for(ll i=0;i<n;i++) cin>>v[i];
    string s=string(200,'a');
    cout<<s<<endl;
    for(ll i=0;i<n;i++) {
        ll x;
        cin>>x;
        if(s[x]=='a') s[x]='b';
        else s[x]='a';
        cout<<s<<endl;
    }
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}