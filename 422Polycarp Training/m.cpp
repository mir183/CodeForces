#include <iostream>
#include<vector>
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
    vector<ll>v(n);
    for(auto &i:v)cin>>i;
    sort(v.begin(),v.end());
    ll ans=1;
    for(ll i=0;i<n;i++){
        if(v[i]>=ans){
            ans++;
        }
    }
    cout<<ans-1<<endl;
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