#include <iostream>
#include<deque>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,q;
    cin>>n>>q;
    deque<ll>v,pre(n+1);
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++){
        pre[i+1]=v[i]+pre[i];
    }
    ll mx=0;
    for(ll i=0;i<=q;i++){
        mx = max(mx, pre[n-i]-pre[2*(q-i)]);
    }
    cout<<mx<<endl;
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