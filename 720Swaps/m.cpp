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
    deque<ll>a(n),b(n),c(2*n+1);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        c[a[i]]=i;
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
        c[b[i]]=i;
    }
    ll ans=c[1]+c[2],mn=c[1];
    for(ll i=4;i<=2*n;i+=2){
        mn=min(mn,c[i-1]);
        ans=min(ans,c[i]+mn);
    }
    cout<<ans<<endl;

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