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
    ld m;
    cin>>n>>m;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<=m){
            v[i]=0;
        }
    }
    ll ans=0;
    ld x=0;
    for(ll i=0;i<n;i++){
        if(ceil(v[i]/m)>=x){
            x=ceil(v[i]/m);
            ans=i;
        }

    }
    cout<<ans+1<<endl;
    return 0;
}