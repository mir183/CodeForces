#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl


// ll fib(ll n){
//     if(n<=1){
//         return n;
//     }else{
//         return fib(n-1)+fib(n-2);
//     }
// }

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    // cout<<fib(9);
    if(n==1){
        cout<<1<<endl;
        return;
    }
    ll ans=2;
    ll cnt=0;
    for(ll i=2;i<n;i++){
        ll back2=v[i-1]+v[i-2];
        if(v[i]==back2){
            cnt++;
        }else{
            cnt=0;
        }
        ans=max(cnt+2,ans);
    }
    cout<<ans<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}