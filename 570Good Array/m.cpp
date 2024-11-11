//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<numeric>
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
    bool possible=false;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        // if(a[i]>=n-1)possible=true;
    }
    
    // if(!possible){
    //     cout<<0<<endl;
    //     cout<<""<<endl;
    //     return;
    // }
    //x>=n
    ll sum=accumulate(a.begin(),a.end(),0LL);
    deque<ll>b=a;
    deque<ll>ans;
    sort(b.begin(),b.end());
    for(ll i=0;i<n;i++){
        ll mx=b[n-1];
        if(mx==a[i]){
            mx=b[n-2];
        }
        if(sum-(a[i]+mx)==mx){
            ans.push_back(i+1);
        }
    }
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<" ";
    }cout<<endl;
    


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