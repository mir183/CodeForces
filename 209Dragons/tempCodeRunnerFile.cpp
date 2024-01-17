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
    ll s,n;
    cin >> s >> n;
    bool win=true;
    for(ll i=0;i<n;i++){
        ll health=s;
        ll a,b;
        cin>>a>>b;
        if(health>=a){
            win=true;
            health+=b;
            continue;
        }else{
            win=false;
            break;
        }
    }

    if(win)yes;
    else no;
    return 0;
}