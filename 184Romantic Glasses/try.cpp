#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

string SF(ll n, vector<ll>&glasses){
    vector<ll> beti(n+1,0);
    vector<ll> beta(n+1,0);

    for (ll i=1;i<=n;i++){
        if(i%2!=0){
        beti[i]=beti[i-1]+glasses[i-1];
        beta[i]=beta[i-1];
        }
        else{
        beti[i]=beti[i-1];
        beta[i]=beta[i-1]+glasses[i-1];
        }
    }

    for (ll i = 1; i <= n; i++) {
        for (ll j=i+1; j<=n; j++) {
        ll betisum=beti[j]-beti[i-1];
        ll betasum=beta[j]-beta[i-1];

        if ((i%2==1 && betisum==betasum) || (i%2==0 && betisum==betasum)){
            return "YES";
        }
        }
    }
    return "NO";



}

int main() {
    fasterio;
    // Your code here
    // Always use ll(long long int), int may give TLE
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll>glasses(n);
        for (ll i=0;i<n;i++) {
            cin>>glasses[i];
        }

        string result=SF(n,glasses);
        cout<<result<<endl;
    }

    return 0;
}