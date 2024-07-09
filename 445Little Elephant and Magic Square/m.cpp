#include <iostream>
#include<vector>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    const ll n=3;
    ll sum=0;
    vector<vector<ll>>v(n,vector<ll>(n));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            ll x;
            cin>>x;
            v[i][j]=x;
            sum+=x;
        }
    }
    sum/=2;

    ll f1,f2,f3;
    f1=sum-v[0][1]-v[0][2];
    f2=sum-v[1][0]-v[1][2];
    f3=sum-v[2][0]-v[2][1];
    v[0][0]=f1;
    v[1][1]=f2;
    v[2][2]=f3;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}