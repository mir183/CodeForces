#include <iostream>
#include <deque>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    deque<deque<char>>a(4, deque<char>(4));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
    for(ll i = 1; i < 4; i++) {
        for(ll j = 1; j < 4; j++) {
            int sharpCount = (a[i - 1][j] == '#') + (a[i - 1][j - 1] == '#') + (a[i][j - 1] == '#') + (a[i][j] == '#');
            if(sharpCount >= 3 || sharpCount <= 1) { 
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";

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