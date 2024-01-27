#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// void gs(ll n,ll k,string s,vector<string>& vstr) {
//     if (n==0) {
//         vstr.push_back(s);
//         return;
//     }
//     for (char c='a';c<'a'+k;c++) {
//         gs(n-1,k,s+c,vstr);
//     }
// }

int main() {
    fasterio;
    ll t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        string s="";
        for (ll i=0;i<n;i++) {
            for (char c ='a';c <'a'+k;c++) {
                s+=c;
            }
        }
        cout << s << endl;
    }
    return 0;
}

