#include <iostream>
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
    if(n<k){
        no;
        return;
    }
    if(k==1){
        yes;
        cout<<n<<endl;
        return;
    }
    if(n%2==0){
        if(k%2==0){
            yes;
            for(ll i=0;i<k-1;i++)cout<<1<<" ";
            cout<<n-(k-1)<<endl;
        }else if(k*2<=n){
            yes;
            for(ll i=0;i<k-1;i++)cout<<2<<" ";
            cout<<n-2*(k-1)<<endl;
        }else{
            no;
        }
    }else{
        if(k%2==1){
            yes;
            for(ll i=0;i<k-1;i++)cout<<1<<" ";
            cout<<n-(k-1)<<endl;
        }else{
            no;
        }
    }
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