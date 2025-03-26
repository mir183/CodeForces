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
    string s;
    cin>>s;
    ll n=s.size();
    for(ll i=2;i<n;i++){
        char c=((s[i-1]-'A')+(s[i-2]-'A'))%26+'A';// idk kisher equation eta, april fool things
        if(c!=s[i]){
            no;
            return;
        }
    }
    yes;
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