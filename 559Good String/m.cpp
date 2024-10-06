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
    string s,res;
    cin>>n>>s;
    bool ok=false;
    // ll n=s.size();
    for(ll i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            res+=s[i-1];
            res+=s[i];
            i++;
        }
    }
    cout<<n-res.size()<<endl;
    cout<<res<<endl;
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