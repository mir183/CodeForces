//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include<queue>
#include <algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

const ll MOD = 1e9+7;

ll p=0, n, m, p2=0;
deque<ll>vis(500010,false);
priority_queue<pair<ll, ll>> pq;


void solve() {
    // ll p=0,p2=0;
    // // Your code here
    // priority_queue<pair<ll,ll>>pq;
    // deque<ll>vis(500010);
    cin>>n;
    if(n==1){
        cin>>m;
        pq.push({m,-p});
        p++;
    }else if(n==2){
        while(vis[p2])p2++;
        cout<<p2+1<<" ";
        vis[p2]=true;
    }else{
        while(vis[-pq.top().second])pq.pop();
        cout<<-pq.top().second+1<<" ";
        vis[-pq.top().second]=true;
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