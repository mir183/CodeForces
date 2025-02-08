#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,p,k,x,y;
    string d;
    cin>>n>>p>>k>>d>>x>>y;
    deque<ll>dp(1000000);
    ll m=1e9+7;
    p--;
    for (ll i=n-1;i>=p;i--){
        dp[i]=x*(1-d[i]+'0');
        if(i+k<n)dp[i]+=dp[i+k];
        m=min(m,(i-p)*y+dp[i]);
    }
    cout<<m<<endl;

}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}