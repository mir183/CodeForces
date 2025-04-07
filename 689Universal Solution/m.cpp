//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<map>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    string s;
    cin>>s;
    ll n=s.size();
    map<char,ll>mp;
    for(char c:s){
        mp[c]++;
    }
    ll mx=-2;
    char c;
    for(auto [x,y]:mp){
        if(y>mx){
            mx=y;
            c=x;
        }
    }
    if(c=='R')c='P';
    else if(c=='P')c='S';
    else if(c=='S')c='R';
    for(ll i=0;i<n;i++){
        cout<<c;
    }cout<<endl;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}