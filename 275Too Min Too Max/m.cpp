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
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for (auto &&i : v)
        {
            cin>>i;
        }
        sort(v.begin(),v.end());
        ll ans=2*(v[n-1]-v[0])+2*(v[n-2]-v[1]);
        cout<<ans<<endl;
    }
    
    return 0;
}