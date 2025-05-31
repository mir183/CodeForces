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

bool ok(deque<ll>&v, ll t){
    ll n=v.size();
    ll curSum=0;
    for(ll i=0;i<n;i++){
        curSum+=v[i];
        if(curSum>t)return false;
        if(curSum==t)curSum=0;
    }
    return curSum==0;
}

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>v(n);
    ll sum=0;
    for(ll i=0;i<n;i++) {
        cin>>v[i];
        sum+=v[i];
    }
    ll ans=n-1; //worst case: merge all elements into one
    for(ll i=1;i*i<=sum;i++){
        if(sum%i==0){
            if(ok(v,i)){
                ans=min(ans,n-(sum/i));
            }

            if(i!=sum/i and ok(v,sum/i)){
                ans=min(ans,n-i);
            }
        }
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