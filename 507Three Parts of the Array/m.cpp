#include <iostream>
#include<deque>
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
    ll ans=0;
    deque<ll>d(n);
    for(ll i=0;i<n;i++) cin>>d[i];
    ll i=0;
    ll j=n-1;
    ll s1=0,s3=0;
    if(s1>s3){
        cout<<0<<endl;
        return;
    }
    while (i<=j)
    {
        if(s3>s1){
            s1+=d[i];
            i++;
        }else{
            s3+=d[j];
            j--;
        }
        if(s1==s3){
            ans=s1;
            // break;
        }
    }
    
    cout<<ans<<endl;
    
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}