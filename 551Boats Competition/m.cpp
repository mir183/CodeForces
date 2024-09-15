#include <iostream>
#include<map>
#include<deque>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0;
    sort(v.begin(),v.end());
    for(ll sum=1;sum<=100;sum++){
        ll cnt=0;
        ll l=0,r=n-1;
        while (l<r){
            if(v[l]+v[r]>sum){
                r--;
            }else if(v[l]+v[r]<sum){
                l++;
            }else{
                cnt++;
                l++;
                r--;
            }
            ans=max(ans,cnt);
        }
    }
    cout<<ans<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}