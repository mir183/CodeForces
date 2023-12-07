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
    string s;
    cin >> s;
    char ip='a';
    int ans=0;
    for(int i=0; i<s.size(); i++) {
        int x=min(abs(s[i]-ip), 26-abs(s[i]-ip));
        ip=s[i];
        ans+=x;
    }
    cout << ans << endl;
    return 0;
}