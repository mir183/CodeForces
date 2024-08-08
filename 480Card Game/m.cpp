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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans=0;
    for(ll i=0;i<2;i++){
        swap(a,b);
        ll x=0;
        if(a>c)x++;
        if(a<c)x--;
        if(b>d)x++;
        if(b<d)x--;
        if(x>0)ans+=2;
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