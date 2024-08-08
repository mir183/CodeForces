#include <iostream>
#include<deque>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
    deque<ll>d(1e5+9);

void solve() {
    // Your code here
    ll n;
    cin>>n;
    ll ans=0;
    while (n>1)
    {
        auto i=upper_bound(d.begin(),d.end(),n)-d.begin();
        i--;
        n-=d[i];
        ans++;
    }
    // cout<<"ANS: ";
    cout<<ans<<endl;
    
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    for(ll i=1;i<=1e5+9;i++){
        d[i]=d[i-1]+3*i-1;
    }
    while (t--) {
        solve();
    }
    return 0;
}