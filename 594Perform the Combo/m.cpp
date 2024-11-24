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
    string s;
    cin>>s;
    deque<ll>v(m);
    for(ll i=0;i<m;i++){
        cin>>v[i];
    }
    v.push_back(n);
    sort(v.begin(),v.end());
    deque<ll>freq(26,0);
    for(ll i=0;i<n;i++){
        ll cnt=v.end()-upper_bound(v.begin(),v.end(),i);
        freq[s[i]-'a']+=cnt;
    }
    for (ll i=0;i<26;i++){
        cout<<freq[i]<<" ";
    }cout<<endl;

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