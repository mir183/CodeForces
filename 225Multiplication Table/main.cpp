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
    ll n,k;
    cin >> n >> k;
    ll ans=0;
    for(ll i=1;i<=n;i++){
        if(k%i==0 and k/i<=n){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}