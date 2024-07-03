#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<numeric>
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
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll tot=accumulate(v.begin(),v.end(),0LL);
    ll ans=0;
    for(ll i=1;i<=5;i++){
        if((tot+i)%(n+1)!=1){
            ans++;
        }
    }
    cout<<ans<<endl;

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