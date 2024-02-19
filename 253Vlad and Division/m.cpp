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
    ll val=2147483647;
    ll ans=0;
    vector<ll> input(n);
    for (ll i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    unordered_map<ll, ll> c;
    for(ll i:input){
        if(c.find(i)==c.end()){
            c[i]=0;
    }
    if(c.find(val-i)!=c.end()){
        c[val-i]=0;
    }
    if(c[val-i]>0){
        c[val-i]--;
    }
    else{
        c[i]++;
        ans++;
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