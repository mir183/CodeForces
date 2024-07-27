#include <iostream>
#include<deque>
#include<algorithm>
#include<numeric>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    deque<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    deque<ll>b(n);
    for(ll i=0;i<n;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    ll s=accumulate(a.begin(),a.end(),0LL);
    for(ll i=0;i<k;i++){
        if(a[i]<b[i]){
            s+=b[i]-a[i];
        }
    }
    cout<<s<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}