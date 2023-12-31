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
    // Always use ll(long long int), int may give TLE
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll ans=0,even=0,odd=0;
        for(ll i=0;i<n;i++){
            ll x;
            cin >> x;
            ans+=x;
            if(x%2==0) even++;
            else odd++;
            ll dif=odd/3;
            if(even==0 and odd==1){
                dif=0;
            }
            else if(odd%3==1){
                dif=(odd+2)/3;
            }
            cout<<ans-dif<<" ";

        }
        cout<<endl;
    }
    
    return 0;
}