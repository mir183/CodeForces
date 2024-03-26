#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
// #define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

ll n,m;
const ll mod=1e18;
vector<ll>v(mod);



bool fnd(int h){
    ll w;
    for(ll i=0;i<n;i++){
        if(v[i]>=h){
            w+=(v[i]-h);
        }
    }
    if(w>=m){
        return true;
    }else{
        return false;
    }
}

void solve() {
    // Your code here
    cin>>n>>m;
    // vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll low=0, high =1e18;
    ll mid;
    while (low<high)
    {   
        mid=(high+low)/2;
        if(fnd(mid)){
            low=mid;
        }else{
            high=mid-1;
        }
    }
    if(fnd(high)){
        cout<<high<<endl;
    }else{
        cout<<low<<endl;
    }
    
}

int main() {
    // fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}