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
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string result = "";

        for (char c : s) {
            if (c != 'B' && c != 'b') {
                result += c;
            } else if (c == 'B' && !result.empty()) {
                reverse(result.begin(), result.end());
                for (int i = 0; i < result.size(); ++i) {
                    if (isupper(result[i])) {
                        result.erase(result.begin() + i);
                        break;
                    }
                }
                reverse(result.begin(), result.end());
            } else if (c == 'b' && !result.empty()) {
                reverse(result.begin(), result.end());
                for (int i = 0; i < result.size(); ++i) {
                    if (islower(result[i])) {
                        result.erase(result.begin() + i);
                        break;
                    }
                }
                reverse(result.begin(), result.end());
            }
        }
        cout << result << endl;
    }
    return 0;
}
