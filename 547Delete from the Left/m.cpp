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
    string s,t;
    cin>>s>>t;
    int n=s.length()-1;
    int m=t.length()-1;
    while(n>=0 && m>=0) {
        if(s[n]!=t[m]) {
            break;
        }
        n--;
        m--;
    }
    cout<<n+m+2<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}