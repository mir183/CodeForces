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
    string s,f;
    cin >> s >> f;
    if(s==f){
        cout << 0 << endl;
        return;
    }
    ll ans=0;
    for(ll i=0;i<n;i++) {
        if(s[i]!=f[i]) {
            if(i+1<n && s[i+1]!=f[i+1] && s[i]!=f[i+1]){
                ans++;
                i++;
            }
            else {
                ans++;
            }
        }
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