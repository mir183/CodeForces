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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto i=1;i<=n;i++){
        cin>>v[i];
        v[i]+=v[i-1];
    }
    ll ans=0;
    for(auto i=1;i<=n-k;i++){
        if(v[ans+k]-v[ans]>v[i+k]-v[i]){
            ans=i;
        }
    }
    cout<<ans+1;
    return 0;
}