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
    ll n,m,k;
    cin>>n>>m>>k;
    deque<ll>a(n+1);
    deque<ll>b(m+1);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a[1]<=b[m]){
        swap(a[1],b[m]);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(k%2==0){
        swap(b[1],a[n]);
    }
    cout<<accumulate(a.begin(),a.end(),0LL)<<endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}