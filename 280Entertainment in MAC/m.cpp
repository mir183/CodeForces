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
    // Your code here
    // Always use ll, int may give TLE
    ll t;
    cin>>t;
    while (t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string ok=s;
    reverse(ok.begin(), ok.end());
    string ans = min(ok+s, s);
    cout<<ans<<endl;
    }
    return 0;
}