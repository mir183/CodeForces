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
    ll a,b;
    cin>>a>>b;
    if(a>b)swap(a,b);
    ll ans=0;
    if(a==1 and b==1){
        cout<<0<<endl;
        return;
    }
    while (a>0 and b>0){
        if(a<b){
            a++;b-=2;
        }else{
            b++;a-=2;
        }
        ans++;
    }
    cout<<ans<<endl;
    
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