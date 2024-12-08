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

// bool cmp(int x, int y,deque<int>& A) {
//     return A[x] > A[y];  
// }

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>a(n);
    deque<ll>l(n);
    deque<ll>unlocked;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }for(ll i=0;i<n;i++){
        cin>>l[i];
    }
    for(ll i=0;i<n;i++){
        if(l[i]==0)unlocked.push_back(i);
    }
    deque<ll>order=unlocked;
    sort(order.begin(),order.end(),[&](int x, int y) {
        return a[x] > a[y];
    });
    deque<ll>b=a;
    for(ll i=0;i<unlocked.size();i++){
        b[unlocked[i]]=a[order[i]];
    }
    for(ll i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
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