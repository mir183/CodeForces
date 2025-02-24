#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    for(ll i=0;i<n;i=i){
        ll k=min_element(v.begin()+i,v.end())-v.begin();
        for(ll j=k;j>i;j--){
            swap(v[j],v[j-1]);
        }
        i=max(k,i+1);
    }
    for(ll i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}