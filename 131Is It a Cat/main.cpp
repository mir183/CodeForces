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
        int n;
        cin>>n;//ajaira nisi
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(unique(s.begin(), s.end()), s.end());

        if(s=="meow")yes;
        else no;
    }

    return 0;
}
