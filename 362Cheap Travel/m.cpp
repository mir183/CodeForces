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
    ll a,b,c,d,n,m;
    cin>>n>>m>>a>>b;

    if(m*a<=b){
        cout<<n*a<<endl;
    }else{
        ll x=min((n%m)*a,b);
        cout<<(n/m)*b+x<<endl;
    }
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}