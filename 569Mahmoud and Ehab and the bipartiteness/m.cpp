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
const ll LIM=1e5+7;

deque<ll>g[LIM];
deque<bool>vis(LIM,false);
deque<ll>cnt(2,0);
// ll cnt[2];
void dfs(ll vr,ll depth){
    //1 vertex e jawar por vertex er upor action
    // vis[vr]=true;
    cnt[depth%2]++;
    // cnt[vr]++;
    vis[vr]=true;
    for(auto child:g[vr]){
        //2 child er upor action, oitar child e jawar agee
        if(!vis[child]){
            dfs(child,depth+1);
        }
        //3 child er upor action, oitar child theke ber hoye
    }
    //4 vertex theke ber howar por, vertex er upor action


}



void solve() {
    // Your code here
    ll n;
    cin>>n;
    for(ll i=1;i<n;i++){
        ll x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);


    }
    dfs(1,0);
    cout<<cnt[0]*cnt[1]-n+1<<endl;
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