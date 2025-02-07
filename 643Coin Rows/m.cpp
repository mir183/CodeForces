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
const ll INF = 9223372036854775807LL;

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<deque<ll>>v(2,deque<ll>(n));
    for(int i=0;i<2;i++){
        for(ll j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    ll ans=INF,sum1=0,sum2=0;
    for(ll i=0;i<n;i++)sum1+=v[0][i];
    for(ll i=0;i<n;i++){
        sum1-=v[0][i];
        ans=min(ans,max(sum1,sum2));
        sum2+=v[1][i];
    }
    cout<<ans<<endl;
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