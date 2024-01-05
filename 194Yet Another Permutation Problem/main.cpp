#include <bits/stdc++.h>
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
    vector<ll> p;
    vector<bool> u(n+1,false);
    
    ll c=1;
    for(ll i=2;i<=n;i++){
        if(!u[i]){
            p.push_back(i);
            u[i]=true;
            c=i;
            while (c*2<=n)
            {
                p.push_back(c*2);
                u[c*2]=true;
                c*=2;
            }
            
        }
    }
    cout<<1<<" ";
    for(auto x:p){
        cout<<x<<" ";
    }
    cout<<endl;


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