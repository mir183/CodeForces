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
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(auto& i:arr)cin>>i;
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(arr[i]==4){
            ans++;
        }else if(arr[i]==1){
            for(ll j=0;j<n;j++){
                if(arr[j]==3){
                    ans++;
                }
            }
        }else if(arr[i]==2){
            for(ll j=0;j<n;j++){
                if(arr[j]==2){
                    ans++;
                }
            }
        }

        
    }
    cout<<ans<<endl;

    return 0;
}