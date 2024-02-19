#include <iostream>
using namespace std;

#define ll long long int
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll sumOfDigits(ll n) {
    ll sum = 0;
    while (n > 0) {
        if (n % 10 != 0) {  // Skip trailing zeros
            sum += n % 10;
        }
        n /= 10;
    }
    return sum;
}

void solve() {
    ll n;
    cin >> n;
    ll totalSum = 0;

    for (ll i = 1; i <= n; i++) {
        totalSum += sumOfDigits(i);
    }

    cout << totalSum << endl;
}

int main() {
    fasterio;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
