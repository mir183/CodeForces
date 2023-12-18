#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    string s;
    cin >> s;

    for (int i=1;i<s.size();i++) {
        string a=s.substr(0,i);
        string b=s.substr(i);

        if (a[0]!='0' && b[0]!='0'&&stoll(b)>stoll(a)) {
            cout<<a<<" "<<b<<endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main() {
    fasterio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
