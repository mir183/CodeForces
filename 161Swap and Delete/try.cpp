#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

int main() {
    fasterio;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int cnt = 0;

        // Count the number of adjacent pairs with equal characters
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                cnt++;
                i++; // Skip the next character since it is part of the same pair
            }
        }

        // Calculate the minimum cost
        cout << min(cnt, (n + 1) / 2) << endl;
    }

    return 0;
}
