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
    cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
        a[i]=a[i]%3;
    }
    
    ll ans=accumulate(a.begin(),a.end(),0LL);
    // cout<<"ans: ";
    if(ans%3==0){
        cout<<0<<endl;
    }else if(ans%3==2){
        cout<<1<<endl;
    }else{
        for(ll i=0;i<n;i++){
            if(a[i]==1){
                cout<<1<<endl;
                return;
            }
        }
        cout<<2<<endl;
    }
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