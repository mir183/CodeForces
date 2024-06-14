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
    deque<ll>d(n);
    bool onease=false;
    for(ll i=0;i<n;i++){
        cin>>d[i];
        if(d[i]==1)onease=true;
    }
    if(onease)yes;
    else{
        sort(d.begin(),d.end());
        ll odd,even;

        for(ll i=0;i<n;i++){
            if(d[i]%2==0){
                even=d[i];
                break;
            }
        }
        for(ll i=0;i<n;i++){
            if(d[i]%2!=0){
                odd=d[i];
                break;
            }
        }
        reverse(d.begin(),d.end());
        bool ok;
        for(ll i=0;i<n;i++){
            if(d[i]%even==0 or d[i]%odd==0){
                ok=true;
            }else{
                ok=false;
                break;
            }
        }
        if(ok){
            yes;
        }else no;


    }


}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}