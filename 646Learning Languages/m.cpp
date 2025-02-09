//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

deque<ll>v[100001];
deque<bool>vis(100001,false);

void dfs(ll node){
    vis[node]=true;
    for(auto i:v[node]){
        if(!vis[i]){
            dfs(i);
        }
    }
}

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    ll cnt=0;
    bool allzero=true;
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        if(x!=0) allzero=false;
        // cnt+=k;
        while (x--)
        {
            ll y;
            cin>>y;
            y+=100;
            v[i].push_back(y);
            v[y].push_back(i);
        }
        
    }

    ll ans=0;
    for(ll i=1;i<=n;i++){
        if(!vis[i]){
            ans++;
            // cnt++;
            dfs(i);
        }
    }
    if(allzero) cout<<n<<endl;
    else cout<<ans-1<<endl;
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