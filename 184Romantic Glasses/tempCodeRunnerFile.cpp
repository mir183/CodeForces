#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

string SF(ll n, vector<ll>&glasses) {
    ll beti=0,beta=0;

    for (ll i=0;i<n;i++){
        if(i%2!=0){
            beti+=glasses[i];
        }else{
            beta+=glasses[i];
        }
    }
    for(ll i=1;i<=n;i++) {
        ll betisum,betasum;

        if (i %2!= 0) {
            betisum=beti-glasses[i-1];
            betasum=beta;
        }else{
            betisum = beti;
            betasum = beta - glasses[i - 1];
        }

        if (betisum == betasum) {
            return "YES";
        }

        if (i<n){
            if (i % 2 != 0) {
                beti -= glasses[i];
            } else {
                beta -= glasses[i];
            }
        }
    }

    return "NO";
}

int main() {
    fasterio;
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> glasses(n);

        for (ll i = 0; i < n; i++) {
            cin >> glasses[i];
        }

        string result = SF(n, glasses);
        cout << result << endl;
    }

    return 0;
}
