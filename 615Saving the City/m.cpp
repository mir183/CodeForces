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
    ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    ll k=1111111111;// any stupid large number will work
    ll res=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='0'){
            k++;
        }else{
            res+=min(a,k*b);
            k=0;
        }
    }
    cout<<res<<endl;
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