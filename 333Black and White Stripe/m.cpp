#include <iostream>
#include <string>
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
    string s;
    cin>>s;
    ll b=0,w=0;
    for(ll i=0;i<k;i++){
        if(s[i]=='W')w++;
        // else
    }
    ll ans=w;
    for(ll i=k;i<n;i++){
        if(s[i]=='W')w++;
        if(s[i-k]=='W')w--;
        ans=min(ans,w);
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