#include <iostream>
#include<cmath>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

auto fnd(ll n){
    ll x=log2(n);
    return pow(2,x);
}

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    if(n==1){
        cout<<k<<endl;
        return;
    }


    ll ans=fnd(k+1);
    ans--;
    cout<<ans<<" ";
    cout<<k-ans<<" ";
    for(ll i=0;i<n-2;i++){
        cout<<"0 "<<" ";
    }

    cout<<endl;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}