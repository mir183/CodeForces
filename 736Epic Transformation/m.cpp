#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll n;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++) {
        ll x;
        cin>>x;
        mp[x]++;
    }
    priority_queue<ll>pq;
    for(auto it:mp) {
        pq.push(it.second);
    }
    while(pq.size()>=2){
        ll a=pq.top();
        pq.pop();
        ll b=pq.top();
        pq.pop();
        a--;
        b--;
        if(a) pq.push(a);
        if(b) pq.push(b);
    }
    if(pq.empty())cout<<0<<endl;
    else cout<<pq.top()<<endl;

}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}