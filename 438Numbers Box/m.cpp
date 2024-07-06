#include <iostream>
#include<deque>
#include<numeric>
#include<climits>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    bool z=false;
    ll tot=0;
    ll mn=INT_MAX;
    ll neg=0;
    deque<deque<ll>> dp(n,deque<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            ll x;
            cin>>x;
            if(x==0) z=true;
            if(x<0) neg++;
            tot+=abs(x);
            mn=min(mn,abs(x));
            dp[i][j]=x;
        }
    }
    // cout<<"tot=";
    if(z) cout<<tot<<endl;
    else if(neg%2==0) cout<<tot<<endl;
    else cout<<tot-2*mn<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}