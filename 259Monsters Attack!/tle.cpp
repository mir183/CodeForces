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
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll> b(n+1,0);
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        x=abs(x);
        b[x]+=a[i];
    }
    bool kill=true;
    ll baki=0;
    for(ll i=1;i<=n;i++){
        baki+=k;
        if(baki<b[i]){
            kill=false;
        }
        else{
            baki-=b[i];
        }
    }
    if(kill)yes;
    else no;
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