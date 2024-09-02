#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
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
    vector<ll>x(n),y(n);
    ll a=0,b=0;
    ll p1=0,p2=0;
    for(ll i=0;i<2*n;i++){
        // ll a,b;
        cin>>a>>b;
        if(b==0){
            x[p1]=abs(a);
            p1++;
        }else{
            y[p2]=abs(b);
            p2++;
        }
    }
    ld ans=0;
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    for(ll i=0;i<n;i++){    
        ans+=sqrt(x[i]*x[i]+y[i]*y[i]);
    }
    cout<<setprecision(15)<<ans<<endl;
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