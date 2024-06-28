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
    ll n,m,k;
    cin>>n>>m>>k;
    if(k==1){
        cout<<1<<endl;
    }else if(k==2){
        if(n>m){
            cout<<m<<endl;
        }else{
            cout<<(n-1)+m/n<<endl;
        }
    }else if(k==3){
        if(m>n){
            ll ans=m-n+1;
            ans-=m/n;
            cout<<ans<<endl;
        }else cout<<0<<endl;
    }else {
        cout<<0<<endl;
    }

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