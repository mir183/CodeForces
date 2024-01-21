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
    ll n;
    cin>>n;
    string s[n];
    for(ll i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);
    cout<<s[n/2];
    return 0;
}