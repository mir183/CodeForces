#include<bits/stdc++.h> //Uncomment while submitting
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
    priority_queue<pair<ll,ll>>pq;
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        if(x>0) pq.push({x,i});
    }

    deque<pair<int,int>>v;
    while(pq.size()>1){
        auto f=pq.top();
        pq.pop();
        auto s=pq.top();
        pq.pop();
        v.push_back({f.second,s.second});
        f.first--;
        s.first--;
        if (f.first) pq.push(f);
        if (s.first) pq.push(s);
    }
    cout<<v.size()<<endl;
    for(auto [x,y]:v){
        cout<<x<<" "<<y<<endl;
    }
    cout<<endl;


    
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