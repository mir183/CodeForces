#include <iostream>
#include <unordered_map>  
#include <algorithm>
#include<climits>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    unordered_map<ll,ll> mp;
    ll mx=INT_MIN;
    ll mex=INT_MAX;
    // ll unq=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]++;
        mx=max(mx,x);
        // if(mp[x]==1) unq++;
    }
    ll unq=mp.size();
    for(ll i=0;i<mx+1;i++){
        if(!mp[i]){
            mex=i;
            break;
        }
    }
    if(mex<mx and k!=0){
        ll avg=(mex+mx+1)/2;
        mp[avg]++;
        if(mp[avg]==1) unq++;
    }else if(mex>mx and k!=0){
        unq+=k;

    }
    cout<<unq<<endl;

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