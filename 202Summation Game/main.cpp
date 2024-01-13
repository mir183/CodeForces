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
    ll n,k,x;
    cin >> n >> k >> x;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    ll pos=n-x;
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(i<(n-x)) sum+=v[i];
        else sum-=v[i];
    }

    ll ans=sum;
    for(ll i=n-1;i>=n-k;i--){
        if(i>=pos){
            sum+=v[i];
        }

        if(pos-1>=0){
            sum-=2*v[pos-1];
        }
        pos--;
        ans=max(ans,sum);
    }
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

