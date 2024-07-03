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
    string s;
    cin>>s;
    ll k;cin>>k;
    vector<ll>v(27);
    for(ll i=1;i<=26;i++){
        cin>>v[i];
    }
    ll ans=0;
    ll mx=*max_element(v.begin(),v.end());
    for(ll i=0;i<s.size()+k;i++){
        if(i<s.size()){
            ans+=(i+1)*v[s[i]-'a'+1];
        }else {
            ans+=(i+1)*mx;
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