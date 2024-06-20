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
    ll n;
    cin>>n;
    deque<ll>d(n);
    for(ll i=0;i<n;i++){
        cin>>d[i];
    }
    ll mx=-1;
    for(ll i=0;i<n-1;i++){
        mx=max(mx,min(d[i],d[i+1]));
    }

    for(ll i=0;i<n-2;i++){
        deque<ll>tmp={d[i],d[i+1],d[i+2]};
        sort(tmp.begin(),tmp.end());
        mx=max(mx,tmp[1]);
    }

    cout<<mx<<endl;

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