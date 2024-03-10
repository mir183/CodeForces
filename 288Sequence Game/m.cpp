#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    // Your code here
    // Always use ll, int may give TLE
    ll t;
    cin>>t;
    while(t--){
            ll m;
    cin>>m;
    vector<ll> b(m);
    for(ll i=0;i<m;i++) {
        cin>>b[i];
    }
    vector<ll>a;
    a.push_back(b[0]);
    for(ll i=1;i<m;i++){
        if(b[i-1]>b[i]){
            a.push_back(b[i]);
            a.push_back(b[i]);

        }
        else{
            a.push_back(b[i]);
        }

    }
    ll n=a.size();
    cout<<n<<endl;
    for(ll i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    }
    return 0;
}