#include <iostream>
#include<vector>
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
    vector<ll>v(n);
    for(auto &i:v)cin>>i;
    ll m;
    cin>>m;
    while (m--)
    {
        ll x;
        cin>>x;
        ll ans=0;
        for(ll i=0;i<n;i++){
            if(v[i]<=x){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}