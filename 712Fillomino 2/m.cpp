//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include <deque>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll n;
    cin>>n;
    //2d vector
    deque<deque<ll>> v(n, deque<ll>(n, 0));
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        ll a=i;
        ll b=i;
        ll y=x;
        while(x--){
            v[a][b]=y;
            if(b!=0 && v[a][b-1]==0)b--;
            else a++;
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(v[i][j]==0)continue;
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
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