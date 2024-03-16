#include <iostream>
#include<vector>
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
        vector<ll>v(n);
        for(auto &i:v)cin>>i;
        ll key=0;
        // bool ok;
        for(ll i=0;i<n;i++){
            if(v[i]<key){
                // ok=false;
                no;
                return;
            }else{
                ll x,y;
                x=v[i]/10;
                y=v[i]%10;
                if(key<=x){
                    if(x<=y){
                        // key++;
                    // ok=true;
                    key=y;
                    }else{
                        // ok=true;
                        key=v[i];
                    }
                }else key=v[i];

            }
        }
        yes;
        // else no;
}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}