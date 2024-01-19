#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here

    ll n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    bool ok=false;
    for(auto i=0;i<n;i++){
        if(a[i]!=c[i] and b[i]!=c[i]){
            ok=true;
            break;
        }
    }

    if(ok)yes;
    else no;


}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}