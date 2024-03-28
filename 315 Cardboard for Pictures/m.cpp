#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve(){
    ll n,c;
    cin>>n>>c;
    vector<ll>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ll l =1,r =1e9;
    while(l<=r){
        ll mid=(l+r)/2;
        ll ans=0;
        for(int i=1;i<=n;i++){
            ll y=mid;
            y+=a[i];
            y*=y;
            ans=ans+y;
            if(ans>c){
                break;
            }
        }
        if(ans==c){
            cout<<mid/2<<endl;
            return;
        }
        if(ans<c){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<l/2<<endl;
}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        // cout<<"ANSWER:  ";
        solve();
    }
    return 0;
}