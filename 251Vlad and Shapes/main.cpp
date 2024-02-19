#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl


void solve() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i=0;i<n;i++) {
        cin >> grid[i];
    }

    int top=n,bottom=-1,left=n,right=-1;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++){
            if (grid[i][j]=='1') {
                top = min(top, i);
                bottom = max(bottom, i);
                left = min(left, j);
                right = max(right, j);
            }
        }
    }

    int height = bottom - top + 1;
    int width = right - left + 1;

    if (height == width) {
        cout << "SQUARE" << endl;
    } else {
        cout << "TRIANGLE" << endl;
    }
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