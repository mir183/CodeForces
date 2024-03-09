#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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
        ll n;
        cin>>n;
        vector<ll> a(n);
        map<ll, ll> m;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        ll mapsize=m.size();
        if(n==2){
            yes;
            continue;
        }
        if(mapsize==1){
            yes;
            // return 0;
        }
        if(mapsize>=3){
            no;
            // return 0;
        }
        if(mapsize==2){
            ll x=0,y=0;
            for(auto it:m){
                if(x==0){
                    x=it.second;
                }
                else{
                    y=it.second;
                }
            }
            if(abs(x-y)<=1){
                yes;
            }
            else{
                no;
            }
        }

    }
    return 0;
}