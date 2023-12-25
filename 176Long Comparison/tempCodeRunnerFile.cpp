#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    ll t;
    cin >> t;
    while (t--) {
        ll a,b,c,d;
        cin >> a >> b >> c >> d;

        int mini = min(b,d);
        b -= mini;
        d -= mini;

        if (b >= 7) {
            cout << ">" << endl;
        } else if (d >= 7) {
            cout << "<" << endl;
        } else {
            for (int i = 1; i <= c; i++) {
                a *= 10;
            }

            for (int i = 1; i <= d; i++) {
                b *= 10;
            }

            if (a == b) {
                cout << "=" << endl;
            } else if (a > b) {
                cout << ">" << endl;
            } else {
                cout << "<" << endl;
            }
        }
    }

    return 0;
}
