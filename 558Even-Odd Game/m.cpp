#include <iostream>
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
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(i%2==0){
            if(v[i]%2==0) ans+=v[i];
        }else{
            if(v[i]%2!=0) ans-=v[i];
        }
    }
    if(ans==0) cout<<"Tie"<<endl;
    else if(ans>0) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;

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