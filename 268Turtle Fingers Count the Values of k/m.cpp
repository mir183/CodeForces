#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll a,b,l;
    cin >> a >> b >> l;
    ll x=1,y=1;
    map<ll,ll> m;
    for(ll i=0;;i++){
        if(x>l)break;
        for(ll j=0;;j++){
            if(y>l)break;
            if(x*y<=l and l%(x*y)==0){
                m[x*y]++;
            }
            y*=b;
        }
        x*=a;
        y=1;

    }
    ll ans=m.size();
    // cout<<"ans:";
    cout << ans << endl;

}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}