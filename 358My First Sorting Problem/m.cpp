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
    deque<ll>d(2);
    for(ll i=0;i<2;i++){
        cin>>d[i];
    }
    sort(d.begin(),d.end());
    for(ll i=0;i<2;i++){
        cout<<d[i]<<" ";
    }
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