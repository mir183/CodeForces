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
    ll n,k;
    cin>>n>>k;
    ll l=0,r=n;
    ll m;
    while (l<=r)
    {
        m=(l+r)/2;
        ll c = ((n-m)*(n-m+1))/2;
        if(c-m==k)break;
        else if(c-m>k){
            l=m+1;
        }else{
            r=m-1;
        }
    }
    cout<<m<<endl;
    
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