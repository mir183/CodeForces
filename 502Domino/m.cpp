#include <iostream>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin>>n;
    ll l=0,r=0;
    ll c=0;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        l+=x;
        r+=y;
        if(x%2!=y%2) {
            c++;
        }
    }
    if(l%2==0 and r%2==0) {
        cout<<0<<endl;
    } else if(c%2==0 and c>0){
        cout<<1<<endl;
    } else {
        cout<<-1<<endl;
    }
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}