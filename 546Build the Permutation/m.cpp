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
    ll n,a,b;
    cin>>n>>a>>b;
    if(abs(a-b)>1 or (a+b)>n-2){
        cout<<-1<<endl;
        return;
    }

    if(a>b){
        ll x=n-a;
        for(ll i=n;i>n-a;i--){
            cout<<x<<" "<<i<<" ";
            x--;

        }
        for(ll i=x;i>=1;i--){
            cout<<i<<" ";
        }cout<<endl;
        return;
    }
    if(b>a){
        ll x=b+1;
        for(ll i=1;i<=b;i++){
            cout<<x<<" "<<i<<" ";
            x++;
        }
        for(ll i=x;i<=n;i++){
            cout<<i<<" ";
        }cout<<endl;
        return;

    }
    if(a==b){
        ll x=a+2;
        cout<<a+1<<" ";
        for(ll i=1;i<=a;i++){
            cout<<x<<" "<<i<<" ";
            x++;
        }
        for(ll i=x;i<=n;i++){
            cout<<i<<" ";
        }cout<<endl;
        return;
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