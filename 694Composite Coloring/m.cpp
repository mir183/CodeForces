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
    deque<ll>prime={2,3,5,7,11,13,17,19,23,29,31};
    deque<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    deque<ll>ans(n,-1);
    ll cur_col=1;
    for(ll p:prime){
        bool got=false;
        for(int i=0;i<n;i++){
            if(ans[i]!=-1)continue;
            if(v[i]%p)continue;
            got=true;
            ans[i]=cur_col;
        }
        if(got)cur_col++;

    }

    cout<<cur_col-1<<endl;
    for(ll i=0;i<n;i++){
        cout<<ans[i]<<" ";
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