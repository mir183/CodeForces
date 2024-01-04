#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    string a,b;
    cin >> a >> b;
    bool flag = false;
    for(ll i=0; i<a.size()-1; i++){
        if((a[i]=='0' and  b[i]=='0') and (a[i+1]=='1' and b[i+1]=='1') )
        {
            flag = true;
            break;
        }
    }
    if(flag){
        yes;
    }
    else{
        no;
    }
    cout << endl;
}

int main() {
    fasterio;
    // Your code here
    // Always use ll(long long int), int may give TLE
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}