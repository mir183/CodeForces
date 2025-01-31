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
    ll best=n+1;
    for(ll k=0;k<=60;k++){
        // string power = to_string(1LL << k); // Uses bitwise shift
        string p = to_string(pow(2, k)); // Uses pow function
        ll q=stoll(p);
        string power=to_string(q);
        ll index=0;
        for(ll ch=0;ch<n;ch++){
            if(index<power.size() and s[ch]==power[index]){
                index++;
            }
        }
        ll remove=n-index;
        ll add=power.size()-index;
        best=min(best,add+remove);
    }
    cout<<best<<endl;
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