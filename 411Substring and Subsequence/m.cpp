#include <iostream>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    string a,b;
    cin>>a>>b;
    ll n=a.size();
    ll m=b.size();
    ll ans=m+n;
    for(ll i=0;i<m;i++){
        ll in=i;
        for(ll j=0;j<n;j++){
            if(in<m and a[j]==b[in]){
                in++;
            }
            ans=min(ans,m+n-in+i);
        }
    }
    cout<<ans<<endl;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}