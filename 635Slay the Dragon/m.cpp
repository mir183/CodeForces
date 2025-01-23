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
    deque<ll>v(n);
    ll sum=0;
    for(ll i=0;i<n;i++) {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    ll q;
    cin>>q;
    while(q--){
        ll x,y;
        cin>>x>>y;
        ll coins=0;
        ll s=0,c=0;
        auto it=lower_bound(v.begin(),v.end(),x);
        ll ans;
        if(it==v.end()){
            ans=v.back();
            if(ans<x)coins=x-ans;
            s=sum-ans;
            if(s<y)coins+=y-s;
        }else{
            ans=v[it-v.begin()];
            if(ans<x)coins=x-ans;
            s=sum-ans;
            if(s<y)coins+=y-s;
            if(it-v.begin()!=0){
                ans=v[it-v.begin()-1];
                if(ans<x)c=x-ans;
                s=sum-ans;
                if(s<y)c+=y-s;
                coins=min(coins,c);
            }
        }
        cout<<coins<<endl;
    
    }
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