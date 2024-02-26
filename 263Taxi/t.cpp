#include <iostream>
#include<map>
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
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    // for(auto&i:mp){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    ll ans=mp[4];
    // cout<<ans<<endl;

    // ans+=(mp[1]+mp[2]*2)/4;
    // ans+=mp[3];
    if(mp[1]>mp[3]){
        ans+=mp[3];
        mp[1]-=mp[3];
        mp[3]=0;
    }else if(mp[1]<=mp[3]){
        ans+=mp[1];
        mp[3]-=mp[1];
        mp[1]=0;
    }
    if(mp[3]>0){
        ans+=mp[3];
        mp[3]=0;
    }
    if(mp[2]){
        ans+=(mp[2]/2);
        mp[2]%=2;
    }
    ll left=mp[1]+mp[2]*2;
    if(left<=4 and left>0){
        ans+=1;
    }
    else if(left%4){
        ans+=1;
    }else{
        ans+=(left/4);
    }




    cout<<ans<<endl;

}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}