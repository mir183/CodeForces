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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    ll left[n], right[n];
    map<ll, ll> mp;
    mp[0]=1;
    mp[n-1]=-1;
    for(ll i=1;i<n-1;i++){
        ll leftDist=abs(v[i]-v[i-1]);
        ll rightDist=abs(v[i]-v[i+1]);
        if(leftDist<rightDist){
            mp[i]=-1;
        }else{
            mp[i]=1;
        }
    }
    left[0]=0;
    right[n-1]=0;
    for(ll i=1;i<n;i++){
        if(mp[i]==-1){
            left[i]=left[i-1]+1;
        }else{
            left[i]=left[i-1]+abs(v[i]-v[i-1]);
        }
    }
    for(ll i=n-2;i>=0;i--){
        if(mp[i]==1){
            right[i]=right[i+1]+1;
        }else{
            right[i]=right[i+1]+abs(v[i]-v[i+1]);
        }
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll l,r;
        cin >> l >> r;
        ll ans=0;
        if(l==r){
            cout << 0 << endl;
            continue;
        }else{
            if(r>l){
                ans=right[l-1]-right[r-1];
                cout << ans << endl;
            }else{
                ans=left[l-1]-left[r-1];
                cout << ans << endl;
            }
        }
    }
    
    
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