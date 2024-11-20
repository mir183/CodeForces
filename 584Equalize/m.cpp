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
    string a;
    string b;
    deque<bool>ok(n);
    cin>>a>>b;
    for(ll i=0;i<n;i++){
        if(a[i]==b[i]){
            ok[i]=true;
        }
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(a[i]!=b[i]){
            if(i+1<n and a[i+1]!=b[i+1] and a[i]!=a[i+1]){
                ans++;
                i++;
            }else ans++;
        }

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