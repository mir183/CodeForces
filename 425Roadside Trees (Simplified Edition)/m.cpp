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
    deque<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=n;
    for(ll i=0;i<n;i++){
        if(i==0){
            ans+=v[i];
            ans++;
        }else if(v[i]<v[i-1]){
            ll d=v[i-1]-v[i];
            ans+=d;
            ans++;
        }else if(v[i]>v[i-1]){
            ll d=v[i]-v[i-1];
            ans+=d;
            ans++;
        }else if(v[i]==v[i-1]){
            ans++;
        }
    }
    cout<<ans-1<<endl;

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