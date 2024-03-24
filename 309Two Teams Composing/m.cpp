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
    ll n;
    cin>>n;

    // map<vector<ll>, vector<ll>> mp;
    vector<ll>a;
    vector<ll>b;
    bool ok=true;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    // // if(n%2){
    // //     cout<<0<<endl;
    // //     return;
    // // }else{
    //     ll l,r;
    //     l=0;
    //     r=ceil(n+1)/2;
    //     for(ll i=l;i<r;i++){
    //         a.push_back(v[i]);
    //     }
    //     for(ll i=r;i<n;i++){
    //         b.push_back(v[i]);
    //     }
    //     if(b[0]=b[1]){
    //         ok=false;
    //     }else if (a.size()!=b.size()){
    //         ok=false;
    //     }else{
    //         set<ll>st(a.begin(),a.end());
    //         if(a.size()!=st.size()){
    //             ok=false;
    //         }
    //     }
    //     if(ok){
    //         cout<<a.size();
    //     }else{
    //         cout<<0<<endl;
    //     }
    // // }

    map<ll,ll>m;
    for(auto i:v){
        m[i]++;
    }
    ll mx=0;
    for(auto i:m){
        mx=max(mx,i.second);
    }
    ll s=m.size();
    if(mx==s){
        cout<<s-1<<endl;
    }else if(mx>s){
        ll ans=min(s,mx-1);
        cout<<ans<<endl;
    }else{
        cout<<mx<<endl;
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