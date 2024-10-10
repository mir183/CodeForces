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
    ll n,k;
    cin>>n>>k;
    deque<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll tot=0;
    for(ll i=0;i<n;i++){
        ll r=a[i]+k;
        ll index=lower_bound(a.begin(),a.end(),r)-a.begin();
        if(index==n or a[index]!=r) index--;
        ll b=index-i-1;
        tot+=b*(b+1)/2;
    }
    cout<<tot<<endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}