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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(abs(a-c)==abs(b-d)) {
        cout << a << " " << d << " " << c << " " << b << endl;
    } else if(a==c) {
        cout << a+abs(b-d) << " " << b << " " << c+abs(b-d) << " " << d << endl;
    } else if(b==d) {
        cout << a << " " << b+abs(a-c) << " " << c << " " << d+abs(a-c) << endl;
    } else if(abs(a-c)!=abs(b-d)) {
        cout << -1 << endl;
    }
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