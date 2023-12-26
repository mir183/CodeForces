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
        ll sum=0,k=0;
        bool flag = false;
        for(ll i=0;i<n;i++){
            cin >> v[i];
            sum += v[i];
        }
        for(ll i=0;i<n-1;i++){
            if(v[i]>k){
                k=v[i]-i;
                v[i+1]+=k;
                v[i]=v[i]-k;
            }
        }
        for(ll i=1;i<n;i++){
            if(v[i]<=v[i-1]){
                flag = true;
                break;

            }
        }
        if(flag){
            no;
        }
        else{
            yes;
        }
    }

    return 0;
}