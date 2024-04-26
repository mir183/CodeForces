#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

signed main() {
    MIR183_PC;
    // Your code here
    // Always use ll, int may give TLE
    ll n;
    cin >> n;
    if (n & (n - 1)) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}