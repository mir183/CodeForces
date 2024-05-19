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
    ll n,x;
    cin>>n>>x;
    deque<ll> d(n);
    ll odd=0,even=0;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        d[i]=a;
        if(a%2)odd++;
        else even++;
    }

    for(ll i=1;i<=min(x,odd);i+=2){
        if(x-i<=even){
            yes;
            return;
        }
    }
    no;

    
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