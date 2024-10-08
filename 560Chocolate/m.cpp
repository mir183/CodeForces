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
    ll pos=-1,ans=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]){
            if(pos==-1){
                ans=1;
            }else{
                ans*=i-pos;
            }
            pos=i;
        }
    }
    cout<<ans<<endl;

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