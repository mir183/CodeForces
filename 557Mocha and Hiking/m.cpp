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
    deque<ll>v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];
    if(v[1]==1){
        cout<<n+1<<" ";
        for(ll i=1;i<=n;i++)cout<<i<<" ";
        cout<<endl;
        return;
    }
    if(v[n]==0){
        for(ll i=1;i<=n;i++)cout<<i<<" ";
        cout<<n+1<<endl;
        return;
    }
    for(ll i=1;i<n;i++){
        if(v[i]==0 && v[i+1]==1){
            for(ll j=1;j<=i;j++)cout<<j<<" ";
            cout<<n+1<<" ";
            for(ll j=i+1;j<=n;j++)cout<<j<<" ";
            cout<<endl;
            return;
        }
    }
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}