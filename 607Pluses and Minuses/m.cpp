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
    ll cur=0,mn=0,res=n;
    for(ll i=0;i<n;i++){
        if(s[i]=='+')cur++;
        else cur--;
        if (cur < mn) {
            mn = cur;
            res += (i + 1);
        }
    }
    cout<<res<<endl;
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