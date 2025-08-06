//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include <unordered_map>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll gs=n/k;
    ll pair=0,single=0;
    if(gs==1)cout<<1<<endl;
    else{
        unordered_map<char,ll> mp;
        for(ll i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(char i='a';i<='z';i++){
            pair+=mp[i]/2;
            if(mp[i]%2==1)single++;
            // if(mp[i]%2==0)single++;
    }
    ll ans=(pair/k)*2;

    single+=(pair%k)*2;
    if(single>=k)ans++;
        cout<<ans<<endl;
    }
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