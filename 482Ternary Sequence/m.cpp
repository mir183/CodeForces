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
    ll a,b,c,d,e,f;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    ll ans=0;
    ll mn=min(c,e);
    ans+=2*mn;
    c-=mn;
    e-=mn;
    f-=(c+a);
    ans-=2*max(0LL,f);
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