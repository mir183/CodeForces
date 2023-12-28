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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        reverse(s.begin(), s.end()); // Reverse the string
        vector<string> v;

        for (ll i = 0; i < n; i++) {
            string syl = "";
            if ((s[i] == 'a' || s[i] == 'e') && i < n - 1) {
                // If the current character is a vowel and not the last character
                syl += s[i];

                // Check if the next character is a consonant
                if (s[i + 1] == 'b' || s[i + 1] == 'c' || s[i + 1] == 'd') {
                    syl += s[i + 1];
                    i++;
                    v.push_back(syl);
                }
            } else if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd') && i < n - 2) {
                // If the current character is a consonant and there are at least two characters remaining
                syl += s[i];

                // Check if the next two characters form a valid CVC syllable
                if ((s[i + 1] == 'a' || s[i + 1] == 'e') && (s[i + 2] == 'b' || s[i + 2] == 'c' || s[i + 2] == 'd')) {
                    syl += s[i + 1];
                    syl += s[i + 2];
                    i += 2;
                    v.push_back(syl);
                }
            }
        }

        reverse(v.begin(), v.end()); // Reverse the vector of syllables

        // Print the syllables
        for (const string& syllable : v) {
            cout << syllable << ".";
        }
        cout << endl;
    }

    return 0;
}