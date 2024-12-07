#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

bool isPeak(ll i,vector<ll>& v,ll l,ll r){
    if(i<=l or i>=r)return false;
    return v[i-1]<v[i] and v[i+1]<v[i];
}

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &i:v)cin>>i;
    ll now=0;
    for(ll i=1;i+1<k;i++){
        if(isPeak(i,v,0,k-1))now++;
    }
    ll ans=now+1;
    ll l=0;
    for (ll i=k;i<n;i++){
        if(isPeak(i-k+1,v,i-k,i-1))now--;
        if(isPeak(i-1,v,i-k+1,i))now++;

        if(now+1>ans){
            ans=now+1;
            l=i-k+1;
        }
    }
    cout<<ans<<" "<<l+1<<endl;
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