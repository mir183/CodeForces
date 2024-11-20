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
const ll N=1e5+7;
deque<ll>g[N];
deque<bool>vis(N,false);
deque<ll>cost(N);

ll dfs(ll node){
    // ans+=node;
    vis[node]=true;
    ll mn=cost[node];
    for(auto child:g[node]){
        if(!vis[child]){
            mn=min(mn,dfs(child));
        }
    }
    return mn;
}



void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    // deque<ll>baki(n);
    for(ll i=1;i<=n;i++){
        ll _;
        cin>>_;
        cost[i]=_;//lol
    }
    // ll ans=0;
    while(k--){
        ll x,y;
        cin>>x>>y;
        // // ans+=x;
        // ll ans=dfs(x,0);
        g[x].push_back(y);
        g[y].push_back(x);
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        if(!vis[i]){
            ans+=dfs(i);
        }
    }
    cout<<ans<<endl;
    

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