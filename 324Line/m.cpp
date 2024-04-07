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
    string s;
    cin>>s;
    deque<ll>d;
    ll total=0;
    ll mnc=0;
    for(ll i=0;i<n;i++){
        ll l=i;
        ll r=n-i-1;
        if(s[i]=='L'){
            if(r>l){
                mnc++;
                total+=r;
                d.push_back(r-l);
            }else{
                total+=l;
        
            }
        }else{
            if(l>r){
                mnc++;
                d.push_back(l-r);
                total+=l;
            }else{
                total+=r;
            }
        }
    }
    deque<ll>ans(n+1);
    for(ll i=mnc;i<=n;i++){
        ans[i]=total;
    }

    sort(d.begin(),d.end(),greater<ll>());
    for(ll i=mnc-1;i>=1;i--){
        total-=d.back();
        d.pop_back();
        ans[i]=total;
    }

    for(ll i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

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