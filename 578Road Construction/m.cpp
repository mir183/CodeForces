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

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    deque<bool>disable(n+1,false);

    for(ll i=0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        disable[x]=true;
        disable[y]=true;
    }
    ll root=-1;
    for(ll i=1;i<=n;i++){
        if(!disable[i]){
            root=i;
            break;
        }
    }
    // ll cnt=0;
    cout<<n-1<<endl;
    for(ll j=1;j<=n;j++){
        if(root!=j){
            // cnt++;
            cout<<root<<" "<<j<<endl;
        }

    }
    // cout<<cnt<<endl;

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