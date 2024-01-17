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
    while(n--){
        // ll health=s;
        ll a,b;
        cin>>a>>b;
        if(s>a){
            win=true;
            s+=b;
            continue;
        }else{
            win=false;
            continue;
        }
    }

    if(win)yes;
    else no;
    return 0;
}