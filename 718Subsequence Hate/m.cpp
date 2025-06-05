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
    ll suf0=0,suf1=0;
    for(ll i=0;i<s.size();i++){
        suf0+=(s[i]=='0');
        suf1+=(s[i]=='1');
    }
    ll ans=min(suf0,suf1);

    ll pre0=0,pre1=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='0'){
            pre0++;suf0--;
        }else{
            pre1++;
            suf1--;
        }
        ans=min(ans,pre1+suf0);
        ans=min(ans,pre0+suf1);
    }
    cout<<ans<<endl;
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