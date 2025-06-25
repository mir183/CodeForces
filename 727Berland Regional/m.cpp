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
    ll n;
    cin>>n;
    deque<ll>a(n+1,0),s(n+1,0),d(n+1,0);
    deque<deque<ll>> v(n+1);
    for(ll i=1;i<=n;i++) {
        cin>>a[i];
        v[i].clear();
    }
    ll b;
    for(ll i=1;i<=n;i++) {
        cin>>b;
        v[a[i]].push_back(b);
    }
    for(ll i=1;i<=n;i++){
        sort(v[i].begin(), v[i].end());
        reverse(v[i].begin(), v[i].end());
        ll k=v[i].size();
        s[0]=0;
        for(ll j=1;j<=k;j++) {
            s[j]=s[j-1]+v[i][j-1];
        }
        for(ll j=1;j<=k;j++) {
            d[j]+=s[k-k%j];
        }
    }
    
    for(ll i=1;i<=n;i++) {
        cout<<d[i]<<" ";
    }
    cout<<endl;
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