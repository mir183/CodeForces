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
    ll n,k;
    cin >> n >> k;
    ll cnt=1;
    while (true)
    {
        ll ans=(n-cnt)/(cnt*2)+k;
        k-=ans;\
        if (k>ans){
            k-=ans;
        }
        else{
            cout<<k<<endl;
            cout<<ans+k*cnt<<endl;
        }
        cnt*=2;
    }
    
    return 0;
}