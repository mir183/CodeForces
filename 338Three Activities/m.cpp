#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

auto get_best3(vector<ll>& a){
    ll mx1=-1,mx2=-1,mx3=-1;
    for (ll i=0;i<a.size();i++) {
        if (mx1==-1 or a[i]>a[mx1]){
            mx3=mx2;
            mx2=mx1;
            mx1=i;
        }else if(mx2==-1 or a[i]>a[mx2]){
            mx3=mx2;
            mx2=i;
        } else if(mx3==-1 or a[i]>a[mx3]){
            mx3=i;
        }
    }
    return vector<ll>{mx1,mx2,mx3};
}

void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n),b(n),c(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    for(ll i=0;i<n;i++) cin>>c[i];
    ll ans=0;
    vector<ll>ba=get_best3(a);
    vector<ll>bb=get_best3(b);
    vector<ll>bc=get_best3(c);

    for (int x : ba) {
        for (int y : bb) {
            for (int z : bc) {
                if (x != y && x != z && y != z) {
                    ans = max(ans, a[x] + b[y] + c[z]);
                }
            }
        }
    }
    cout<<ans<<endl;
}

signed main() {
    MIR183_PC;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}