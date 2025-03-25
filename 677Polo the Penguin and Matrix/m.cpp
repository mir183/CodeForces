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
    ll n,m,d;
    cin>>n>>m>>d;
    deque<ll>v(n*m);
    for(ll i=0;i<n*m;i++)cin>>v[i];
    sort(v.begin(),v.end());
    ll cnt=0;
    ll mid=v[v.size()/2];
    for(ll i=0;i<v.size();i++){
        ll k=abs(v[i]-mid);
        cnt+=(k/d);
        if(k%d!=0){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<cnt<<endl;
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