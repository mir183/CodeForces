#include <iostream>
#include<deque>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

ll n;
deque<ll>v;
deque<ll>vis;
deque<ll>x;
deque<ll>y;

void dfs(ll node){
    vis[node]=1;
    for(ll i=1;i<=n;i++){
        if(!vis[i] && (x[i]==x[node] || y[i]==y[node])){
            dfs(i);
        }
    }

}


void solve() {
    // Your code here
    // ll n;
    cin>>n;
    v.resize(n+1);
    vis.resize(n+1);
    x.resize(n+1);
    y.resize(n+1);
    for(ll i=1;i<=n;i++){
        cin>>x[i]>>y[i];
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        if(!vis[i]){
            ans++;
            dfs(i);
        }
    }
    cout<<ans-1<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}