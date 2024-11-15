#include <bits/stdc++.h>
#include<deque>
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
    deque <ll> v(n);
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        x--;
        v[x]=i;
    }
    ll mn=LLONG_MAX, mx=LLONG_MIN;
    for(ll i=0;i<n;i++){
        mn=min(mn,v[i]);
        mx=max(mx,v[i]);
        if(i==mx-mn)cout<<1;
        else cout<<0;
    }
    cout<<endl;

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