#include <iostream>
#include <vector>
#include <algorithm>
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
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(auto &i:v)cin>>i;

        ll ans=LLONG_MIN,cur=0;
        for(ll i=0;i<n;i++){
            if(i>0 and (abs(v[i-1]%2)==(abs(v[i]%2)))){
                cur=v[i];
                ans=max(ans,cur);
            }
            else{
                cur=max(v[i],cur+v[i]);
                ans=max(cur,ans);
            }
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}