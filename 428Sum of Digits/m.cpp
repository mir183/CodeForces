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
    string a;
    cin>>a;
    ll ans=0;
    while (a.size()>1)
    {
        ll sum=0;
        for(ll i=0;i<a.size();i++){
            sum+=(a[i]-'0');
        }
        a=to_string(sum);
        ans++;
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