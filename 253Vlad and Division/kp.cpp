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
    map<ll, ll> mp;
    ll ans=0;
    ll x,y;
    ll d=pow(2,31)-1;
    for( ll i=0;i<n;i++){
        cin>>x;
        y=d^x;
        if(mp[x]==0){
            ans++;
            mp[y]++;
        }
        else{
            mp[x]--;
        }
    }
    cout<<ans<<endl;
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