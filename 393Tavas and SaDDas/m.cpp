#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin>>n;
    ll ans=0;
    ll m=1;
    while (n>0)
    {
        ll k=n%10;
        n=n/10;
        if(k==4){
            ans+=m;
        }else if(k==7){
            ans+=(2*m);
        }
        m*=2;
    }
    cout<<ans<<endl;

}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}