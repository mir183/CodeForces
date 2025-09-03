//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<queue>
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
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    ll sum=0;
    ll potions=0;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        sum+=a;
        pq.push(a);
        potions++;
        while(sum<0){
            sum-=pq.top();
            pq.pop();
            potions--;
        }
    }
    cout<<potions<<endl;
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