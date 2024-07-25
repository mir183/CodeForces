#include <iostream>
#include<string>
#include<algorithm>
#include<deque>
#include<map>
#include<climits>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    deque<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    
    ll ans=LLONG_MAX;


    for(ll j=1;j<101;j++){
        ll i=0,now=0;
        while (i<n)
        {
            if(v[i]==j)i++;
            else{
                now++;
                i+=k;
            }
        }
        ans=min(ans,now);
        
    }

    // cout<<"ANS: ";
    cout<<ans<<endl;

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