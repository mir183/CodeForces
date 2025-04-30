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
    ll n,k;
    cin>>n>>k;
    deque<ll>a(n);
    deque<ll>b(k);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<k;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end(),greater<ll>());
    sort(b.begin(),b.end());
    ll sum=0;
    ll ind=k-1;
    for(ll i=0;i<k;i++){
        if (b[i]!=1) {
            ind=ind+b[i]-1;
            sum+= a[ind]+a[i];
        }else{
            sum+=2* a[i];
        }
    }
    cout<<sum<<endl;

    
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