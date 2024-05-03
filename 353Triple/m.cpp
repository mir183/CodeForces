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
    ll n;
    cin>>n;
    deque<ll>d(n);
    unordered_map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        d[i]=x;
        mp[x]++;
    }
    for(auto i:mp){
        if(i.second>=3){
            cout<<i.first<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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