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
        int b = 0, B = 0;
        for (int i=s.size()-1; i>=0; i--) {
            if (s[i] == 'b') b++;
            else if (s[i] == 'B') B++;
            else if (s[i] >= 'a' &&s[i] <= 'z') {
                    if (b > 0) b--;
                    else result += s[i];
                }
 
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                if (B > 0) B--;
                else result += s[i];

            }

        }
        reverse(result.begin(), result.end());
        cout << result << endl;
        

    }
    return 0;
}
