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
    string s;
    cin>>s;
    string ans[7]={"aa","aba","aca","abca","acba","abbacca","accabba"};
    ll res=-1;
    for(ll i=0;i<7;i++){
        if(s.find(ans[i]) != -1) {
            res=ans[i].size();
            break;
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