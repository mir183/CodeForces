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
    ll n;
    cin >> n;
    map<char, ll> mp;
    string ms;
    while (n--) {
        string s;
        cin >> s;
        ms.append(s);
    }

    vector<char> order;
    for (ll i = 0; i < ms.size(); i++) {
        if (ms[i] >= 'A' && ms[i] <= 'Z') {
            if (mp.find(ms[i])== mp.end()) {
                order.push_back(ms[i]);
            }
            mp[ms[i]]++;
        }
    }

    char maxchar = '\0';
    ll maxcharCNT = 0;
    
    for (char c : order) {
        if (mp[c] > maxcharCNT) {
            maxcharCNT = mp[c];
            maxchar = c;
        }
    }

    for (char c : order) {
        if (mp[c] == maxcharCNT) {
            cout << c;
        }
    }

    return 0;
}
