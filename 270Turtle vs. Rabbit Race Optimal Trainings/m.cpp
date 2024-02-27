#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl


ll wd(vector<ll>&a, ll l, ll r, ll u){
    ll val = a[r]-a[l-1];
    ll x=(2*u-val+1)*val/2;
    return x;
}

void solve() {
    // Your code here
    ll n;
    cin >> n;
    vector<ll> a(n+1);
    for(ll i=1; i<=n; i++){
        cin >> a[i];
        a[i]=a[i]+a[i-1];
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll l,u;
        cin >> l >> u;
        ll low=l, high=n;
        while(low<high){
            ll mid=(low+high)/2;
            if(wd(a,l,mid,u)>=wd(a,l,mid+1,u)){
                high=mid;
            }
            else{
                low=mid+1;
            }

        }
        // cout<<"ans:";
        cout <<low<<" ";

    }
    cout << endl;
    
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