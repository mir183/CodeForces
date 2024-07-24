#include <iostream>
#include<string>
#include<algorithm>
#include<deque>
#include<map>
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
    deque<ll>a(n);
    deque<ll>b(n-1);
    deque<ll>c(n-2);
    ll s1=0,s2=0,s3=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        s1+=a[i];
    }
    for(ll i=0;i<n-1;i++){
        cin>>b[i];
        s2+=b[i];
    }
    for(ll i=0;i<n-2;i++){
        cin>>c[i];
        s3+=c[i];
    }
    cout<<s1-s2<<endl<<s2-s3<<endl;
    
    

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}