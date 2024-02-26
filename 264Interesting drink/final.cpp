#include <iostream>
#include<vector>
#include<iterator>
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
    sort(v.begin(),v.end());
    ll m;
    cin>>m;
    while (m--)
    {
        ll x;
        cin>>x;
        
        
        auto it=upper_bound(v.begin(),v.end(),x);

        ll ans=distance(v.begin(),it);




        cout<<ans<<endl;
    }
    
    return 0;
}