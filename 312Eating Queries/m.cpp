#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

ll n,m;

vector<ll>pres(n+1,0);

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;

    vector<ll>pres(n+1,0);
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<ll>());
    // reverse(v.begin(),v.end());
    for(ll i=1;i<=n;i++){
        pres[i]=v[i-1]+pres[i-1];
    }
    ll presall=accumulate(v.begin(),v.end(),0LL);
    // cout<<presall<<endl;
    while (m--)
    {
        ll x;
        cin>>x;
        // for(auto i=0;i<pres.size();i++){
        //     if(x>presall){
        //         cout<<-1<<endl;
        //         break;
        //     } else if(pres[i]<x){
        //         continue;
        //     }
        //     else if(pres[i]>=x){
        //         cout<<i<<endl;
        //         break;
        //     }
        // }

        if(x>presall){
            cout<<-1<<endl;
            continue;
        }

        ll low=1;
        ll high=n;
        ll ans=0;
        while(low<=high){
            ll mid=(low+high)/2;
            if(pres[mid]>=x){
                ans=mid;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        cout<<ans<<endl;


        }
}
    
int main() {
    // fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}