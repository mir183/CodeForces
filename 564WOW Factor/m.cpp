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
    string s;
    cin>>s;
    ll n=s.size();
    deque<ll>f(n,0),b(n,0);
    for(ll i=1;i<n;i++){
        if(s[i]=='v' and s[i-1]=='v') f[i]=f[i-1]+1;
        else f[i]=f[i-1];
    }
    for(ll i=n-2;i>=0;i--){
        if(s[i]=='v' and s[i+1]=='v') b[i]=b[i+1]+1;
        else b[i]=b[i+1];
    }
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='o') cnt+=f[i]*b[i];
    }
    cout<<cnt<<endl;
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