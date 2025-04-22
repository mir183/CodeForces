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
    deque<ll>a(n);
    deque<ll>b(n);
    deque<pair<ll,ll>>c(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    for(ll i=0;i<n;i++){
        c[i].first=a[i];
        c[i].second=b[i];
    }
    sort(c.begin(),c.end());
    ll t=0,i;
    for(i=n-1;i>=0;i--){
        if(c[i].first>=(c[i].second+t)){
            t+=c[i].second;
        }
        else{
            break;
        }
    }
    if(i<0){
        cout<<t<<endl;
    }
    else{
        cout<<max(t,c[i].first)<<endl;
    }

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