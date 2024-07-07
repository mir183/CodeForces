#include <iostream>
#include<deque>
#include<map>
#include<climits>
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
    ll f1=LLONG_MAX,f2=LLONG_MIN;
    deque<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        // ll f1,f2;
        f1=min(f1,x);
        f2=max(f2,y);
        v.push_back({x,y});
    }

    for(ll i=0;i<n;i++){
        if(v[i].first==f1 and v[i].second==f2){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}