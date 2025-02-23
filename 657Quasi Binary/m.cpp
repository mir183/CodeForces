#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    string s;
    cin>>s;
    ll n=s.size();
    ll ans=0;
    for(auto c:s){
        ans =max(ans,(ll)(c-'0'));
    }
    cout<<ans<<endl;

    for(ll i=0;i<ans;i++){
        n=0;
        for(auto c:s){
            if(c-'0'-i>0){
                n=n*10+1;
            }else{
                n=n*10;
            }
        }
        cout<<n<<" ";
    }

}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}