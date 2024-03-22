#include <iostream>
#include<vector>
#include<algorithm>
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
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=0;
        ll p=0;
        for(int k=1;k<=n;k++){
            if(n%k!=0) continue;
                ll mn=LLONG_MAX,mx=LLONG_MIN;
                for(ll i=0;i<n;i+=k){
                    for(ll j=i;j<i+k;j++){
                        p+=v[j];
                    }
                    mx=max(mx,p);
                    mn=min(mn,p);
                    p=0;
                }
                ans=max(ans,mx-mn);
            
        }
        cout<<ans<<endl;
    }
    
    return 0;
}