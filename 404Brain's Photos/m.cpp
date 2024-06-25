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
    ll n,m;
    cin>>n>>m;
    bool ok=true;
    for(ll i=0;i<n;i++) {
        for(ll j=0;j<m;j++) {
            char c;
            cin>>c;
            if(c=='C' || c=='M' || c=='Y') ok=false;
        }
    }
    if(ok) {
        cout<<"#Black&White"<<endl;
    } else {
        cout<<"#Color"<<endl;
    }
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}