#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void SF(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll,ll>mp;
    mp[0]=1;
    ll sum=0,ans=0;
    for(ll i=0;i<n;i++){
        cin >> v[i];
        if(i%2==0){
            v[i]=-v[i];
        }
        sum+=v[i];
        mp[sum]++;
        if(mp[sum]>=2){
            ans++;
        }
    }

    if(ans > 0){
        yes;
    } else {
        no;
    }
}

int main() {
    fasterio;
    ll t;
    cin >> t;
    while (t--){
        SF();
    }
    
    return 0;
}
