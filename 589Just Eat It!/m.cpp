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
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll s1=0;
    for(ll i=0;i<n;i++){
        s1+=v[i];
        if(s1<=0){
            no;
            return;
        }
    }
    ll s2=0;
    for(ll i=n-1;i>=0;i--){
        s2+=v[i];
        if(s2<=0){
            no;
            return;
        }
    }
    yes;


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