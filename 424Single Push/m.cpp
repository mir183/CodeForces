#include <iostream>
#include<deque>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>a(n),b(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];

    ll l,r, diffff=0;
    for(ll i=0;i<n;i++){
        if(a[i]!=b[i]){
            diffff=b[i]-a[i];
            l=i;
            break;
        }
    }
    for(ll i=n-1;i>=0;i--){
        if(a[i]!=b[i]){
            r=i;
            break;
        }
    }
    for(ll i=l;i<=r;i++){
        a[i]+=diffff;
    }
    bool ok=true;
    for(ll i=0;i<n;i++){
        if(a[i]!=b[i]){
            ok=false;
            break;
        }
    }
    if(diffff<0){
        no;
        return;
    }
    if(ok)yes;
    else no;


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