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
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n+1);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    // sort(v.begin(),v.end());
    // vector<ll>ans;
    ll mx=LLONG_MIN;
    for(ll i=1;i<n;i++){
        ll d=v[i]-v[i-1];
        mx=max(mx,d);
    }
    // ll f=*max_element(ans.begin(),ans.end());
    mx=max(mx,v[0]-0);
    mx=max(mx,2*(x-v[n-1]));
    cout<<mx<<endl;

    }
    
    return 0;
}