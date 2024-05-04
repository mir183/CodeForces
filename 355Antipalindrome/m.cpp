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
    string revs=s;
    reverse(revs.begin(), revs.end());
    ll n=s.length();
    if(s==revs){
        if(s==string(n,s[0])) {
            cout<<0<<endl;
        }else{
            cout<<n-1<<endl;
        }
        return;
    }
    cout<<n<<endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}