#include<bits/stdc++.h> //Uncomment while submitting
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
    deque<ll>f(26,0);
    for(ll i=0;i<n;i++){
        f[s[i]-'a']++;
    }
    for(ll i=0;i<26;i++){
        if(f[i]%2){
            if(n%2){
                cout<<"First"<<endl;
            }else{
                cout<<"Second"<<endl;
            }
            return;
        }
    }
    cout<<"First"<<endl;
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