#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    vector<int> x(4), y(4);
    for(int i=0; i<4; i++) {
        cin >> x[i] >> y[i];
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    int side=max(x[3]-x[0],y[3]-y[0]);
    cout << side * side << endl;
}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}