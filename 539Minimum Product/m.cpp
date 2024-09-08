#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    ll ans=LLONG_MAX;
    for(ll i=0;i<2;i++){
        ll da=min(n,a-x);
        ll db=min(n-da,b-y);
        ans=min(ans,(a-da)*(b-db));
        swap(a,b);
        swap(x,y);
    }
    // cout<<"ANS: ";
    cout<<ans<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}