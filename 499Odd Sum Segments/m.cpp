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
    ll n,k;
    cin>>n>>k;
    deque<ll>v(n);
    ll odd=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v[i]=x;
        if(x%2)odd++;
    }
    if(odd<k){
        no;
        return;
    }
    if(odd%2!=k%2){
        no;
        return;
    }
    yes;
    for(ll i=0;i<n;i++){
        if(k==1)break;;
        if(v[i]%2){
            cout<<i+1<<" ";
            k--;
        }
        
    }
    cout<<n<<endl;

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