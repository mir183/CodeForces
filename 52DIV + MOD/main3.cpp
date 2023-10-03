#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int l, r, a;
        cin >> l >> r >> a;

        long long int max_val;

        if (l >= r) {
            max_val = min(l, r);
        } else if (l < a) {
            max_val = l;
        } else {
            long long int num = r % a;
            if (num == 0) {
                max_val = r;
            } else {
                max_val = r - num + a;
            }
        }

        cout << max_val << endl;
    }
    return 0;
}
