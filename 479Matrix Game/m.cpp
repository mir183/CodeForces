#include <iostream>
#include<vector>
#include<numeric>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    // ll z=0;
    vector<bool>r(n,true);
    vector<bool>c(m,true);
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            ll x;cin>>x;
            if(x==1){
                r[i]=c[j]=false;
            }
        }
    }
    ll rs=accumulate(r.begin(),r.end(),0LL);
    ll cs=accumulate(c.begin(),c.end(),0LL);
    ll z=min(rs,cs);
    if(z%2==0){
        cout<<"Vivek"<<endl;
    }else cout<<"Ashish"<<endl;
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