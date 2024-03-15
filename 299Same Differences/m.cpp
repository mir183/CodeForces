#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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
    while(t--){
        ll n;
    cin >> n;
    map<ll, ll> mp;
    ll ans = 0;
    for(ll i=1;i<=n;i++){
        ll x;
        cin >> x;
        x-=i;
        //ans+=mp[x];
        mp[x]++;
        
    }
    for(auto i:mp){
        ll x=i.second;
        ans+=x*(x-1)/2;
    }
    cout<<ans<<endl;}


    return 0;
}