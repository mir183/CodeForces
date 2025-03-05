//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<set>

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
    set<pair<ll,ll>>s;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        ll og_x=x;
        ll y=0;
        while(x%3==0){
            ++y;
            x/=3;
        }
        s.insert({-y,og_x});
    }
    for(auto [x,y]:s){
        cout<<y<<" ";
    }cout<<endl;
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