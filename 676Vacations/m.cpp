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
    deque<ll>s(n);
    ll ans=0;
    for(ll i=0;i<n;i++){
        cin>>s[i];
        if(s[i]==0){
            ans++;
            continue;
        }
        if(i==0){
            continue;
        }
        if(s[i]==3){
            if(s[i-1]==1)s[i]=2;
            else if (s[i-1]==2)s[i]=1;
        }else if(s[i-1]==s[i]){
            ans++;
            s[i]=3;
        }
        // cout<<ans<<endl;
    }
    cout<<ans<<endl;
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