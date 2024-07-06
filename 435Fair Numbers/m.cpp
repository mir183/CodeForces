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
    bool ok=false;
    while (!ok){
        ok=true;
        string s=to_string(n);
        for(ll i=0;i<s.size();i++){
            ll x=s[i]-'0';
            if(x!=0 and n%x!=0){
                n++;
                ok=false;
                break;
            }
        }

    }
    cout<<n<<endl;
    
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