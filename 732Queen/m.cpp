#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>p(n);
    deque<ll>c(n);
    for(ll i=0; i<n; i++) {
        cin>>p[i]>>c[i];
        if(p[i]>0){
            p[i]--;
        }
    }
    deque<bool>good(n,false);
    for(ll i=0;i<n;i++){
        if(c[i]==0 and p[i]>=0){
            good[p[i]]=true;
        }
    }
    bool first=true;
    for(ll i=0;i<n;i++){
        if(c[i]==1 and !good[i]){
            if(!first){
                cout<<" ";
            }
            first=false;
            cout<<i+1;
        }
    }
    if(first){
        cout<<"-1";
    }
    cout << endl;

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