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
    ll  n,c;
    cin>>n>>c;
    deque<ll>d(n);
    for(ll i=0;i<n;i++){
        cin>>d[i];
        d[i]+=(i+1);
    }
    sort(d.begin(),d.end());
    ll ans=0;
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(sum+d[i]>c){
            break;
        }
        sum+=d[i];
        ans++;
    }
    cout<<ans<<endl;
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