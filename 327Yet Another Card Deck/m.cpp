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
    ll n,q;
    cin>>n>>q;
    deque<ll>d(n+1);
    for(ll i=0;i<n;i++){
        cin>>d[i];
    }
    while (q--)
    {
        ll x;
        cin>>x;
        ll j=0;
        for(auto i=j;i<n;i++){
            if(d[i]==x){
                // // d.resize();
                cout<<i+1<<" ";
                d.erase(d.begin()+i);
                d.push_front(x);
                i=j;
                break;
            }
        }
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