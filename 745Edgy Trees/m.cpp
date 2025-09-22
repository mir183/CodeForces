//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;
#define MOD 1000000007
#define N 100005
ll num;
vector<int>G[N];
ll n,k,vis[N];
ll P(int x){
	ll tmp=1;
	for(int i=1;i<=k;i++)
		(tmp*=x)%=MOD;
	return tmp;
}
void dfs(int x){
    num++;
    vis[x]=1;
    for(auto i:G[x]){
        if(!vis[i])
            dfs(i);
    }
}

void solve() {
    // Your code here
    // ll n,k;
    cin>>n>>k;
    for(ll i=1;i<n;i++){
        ll l,r,x;
        cin>>l>>r>>x;
        if(x==0){
            G[l].push_back(r);
            G[r].push_back(l);
        }
    }
    ll ans=P(n);
    for(ll i=1;i<=n;i++){
        if(!vis[i]){
            num=0;
            dfs(i);
            ans=(ans+MOD-P(num))%MOD;
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