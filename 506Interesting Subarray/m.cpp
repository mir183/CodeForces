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
    for(ll i=1;i+1<=n;i++){ 
        if(abs(v[i+1]-v[i])>1){
            yes;
            cout<<i<<" "<<i+1<<endl;
            return;
        }
    }
    no;
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