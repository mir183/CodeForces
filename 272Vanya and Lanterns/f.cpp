#include <iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
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
    ll n,l;
    cin>>n>>l;
    vector<ll>v(n);
    for(auto &i:v){
        cin>>i;
        
    }
    // for(ll i=0;i<n;i++){
    //     v[i]=v[i+1]-v[i];
    // }
    sort(v.begin(),v.end());
    // auto mn=*max_element(v.begin(),v.end());
    // float ans=static_cast<float>(mn)/2;
    ll ans=2*max(v[0],l-v[n-1]);
    for(ll i=1;i<n;i++){
        ans=max(ans,v[i]-v[i-1]);
    }
    cout<<fixed<<setprecision(9)<<ans/2.0<<endl;
    return 0;
}