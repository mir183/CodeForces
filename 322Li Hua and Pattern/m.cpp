#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    int arr[n][n];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    ll ans=0;

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(arr[i][j]!=arr[n-i-1][n-j-1]){
                ans++;
            }
        }
    }
    ans/=2;

    if(k>=ans and (n%2==1 or abs(ans-k)%2==0)){
        yes;
    }else{
        no;
    }
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}