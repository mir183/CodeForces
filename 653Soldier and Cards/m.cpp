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
    cin>>n;//no use;
    cin>>n;
    deque<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    cin>>n;
    deque<ll>b(n);
    for(ll i=0;i<n;i++) cin>>b[i];
    ll cnt=0;
    while(cnt<=1e7){
        if(a.empty()){
            cout<<cnt<<" "<<2<<endl;
            return;
        }
        if(b.empty()){
            cout<<cnt<<" "<<1<<endl;
            return;
        }
        ll x=a.front();
        ll y=b.front();
        a.pop_front();
        b.pop_front();
        if(x>y){
            a.push_back(y);
            a.push_back(x);
        }
        else{
            b.push_back(x);
            b.push_back(y);
        }
        cnt++;
    }
    cout<<-1<<endl;
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