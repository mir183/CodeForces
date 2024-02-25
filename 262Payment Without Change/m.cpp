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
    ll a,n,b,s;
    cin>>a>>n>>b>>s;
    // ll ans=1;
    ll ans=a*n;
    while (b--)
    {
        ans+=b;
        if(ans==s){
            break;
        }
    }
    
    if(ans==s){
        yes;
    }else{
        no;
    }
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