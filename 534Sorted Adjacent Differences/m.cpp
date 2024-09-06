#include <iostream>
#include<deque>
#include<algorithm>
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
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    deque<ll>ans;
    for(ll i=0;i<n/2;i++){// what if n is odd
        ans.push_back(v[i]);
        ans.push_back(v[n-i-1]);
    }
    if(n%2) ans.push_back(v[n/2]);
    reverse(ans.begin(),ans.end());
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
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