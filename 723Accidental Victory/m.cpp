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
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    deque<ll>b=a;
    sort(b.begin(),b.end());
    ll sum=0,s=0;
    for(ll i=0;i<n;i++){
        if(sum<b[i]){
            s=i;
        }
        sum+=b[i];
    }
    cout<<n-s<<endl;
    for(ll i=0;i<n;i++){
        if(a[i]>=b[s]){
            cout<<i+1<<" ";
        }

    }cout<<endl;

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