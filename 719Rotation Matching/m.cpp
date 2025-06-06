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
    deque<ll>a(n),b(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    deque<ll>posA(n+1),posB(n+1);
    for(ll i=0;i<n;i++){
        posA[a[i]]=i;
    }
    for(ll i=0;i<n;i++){
        posB[b[i]]=i;
    }

    deque<ll>freq(n,0);
    for(ll i=1;i<=n;i++){
        freq[(posB[i]-posA[i]+n)%n]++;
    }
    cout<<*max_element(freq.begin(),freq.end())<<endl;
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