#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll s,n;
    cin>>s>>n;
    pair<ll,ll>v[1000];
    bool win=true;


    for(ll i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }


    sort(v,v+n);

    for(ll i=0;i<n;i++){
        if(v[i].first>=s){
            win=false;
            break;
        }else{
            win=true;
            s+=v[i].second;
        }
    }

    if(win)yes;
    else no;
    
    

}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}