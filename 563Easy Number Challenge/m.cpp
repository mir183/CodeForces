#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const ll N=1e6+7;
deque<ll>dv(N,0);

void precom(){
    for(ll i=1;i<N;i++){
        for(ll j=i;j<N;j+=i){
            dv[j]++;
        }
    }
}

void solve() {
    // Your code here
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=0;
    for(ll i=1;i<=a;i++){
        for(ll j=1;j<=b;j++){
            for(ll k=1;k<=c;k++){
                ans+=dv[i*j*k];
            }
        }
    }
    cout<<ans<<endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    precom();
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}