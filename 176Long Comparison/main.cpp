#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        int mn = min(b, d);
        b -= mn;
        d -= mn;

        if (b >= 7)
            cout << ">" << endl;
        else if (d >= 7)
            cout << "<" << endl;
        else {
            for (int i = 0; i < b; ++i)
                a *= 10;
            for (int i = 0; i < d; ++i)
                c *= 10;

            if (a < c)
                cout << "<" << endl;
            else if (a > c)
                cout << ">" << endl;
            else
                cout << "=" << endl;
        }
    }

    return 0;
}
