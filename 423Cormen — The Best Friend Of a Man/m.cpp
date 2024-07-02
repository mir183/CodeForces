#include <iostream>
#include<vector>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0;
    for(ll i=1;i<n;i++){
        if(v[i-1]+v[i]<k){
            ll baki;
            baki=k-(v[i-1]+v[i]);
            v[i]+=baki;
            ans+=baki;
        }
    }
    cout<<ans<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;


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