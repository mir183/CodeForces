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
    map<ll,ll>m;
    deque<ll>d(n);
    for(ll i=0;i<n;i++){
        cin>>d[i];
    }
    for(ll i=0;i<n;i++){
        ll x=d[i];
        m[x]++;
    }
    ll mx=-1;
    for(auto i:m){
        if(i.second>mx){
            mx=max(mx,i.second);
        }
    }
    ll ans=0;
    // cout<<mx<<endl;
    set<ll>st(d.begin(),d.end());
    if(st.size()==m.size()){
        cout<<n-1<<endl;
    }else{
            for(auto i:m){
        if(i.second!=mx){
            ans+=i.second;
        }
    }
    cout<<ans<<endl;
    }

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