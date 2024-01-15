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
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vector<ll> m(n);
    for(ll i=0;i<n;i++) cin>>m[i];
    ll p=0,mn=0;
    for(ll i=0;i<n;i++){
        ll x=a*(abs(m[i]-p));
        mn=min(b,x);
        f-=mn;
        p=m[i];
    }
    if(f>0){
        yes;
    }else{
        no;
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