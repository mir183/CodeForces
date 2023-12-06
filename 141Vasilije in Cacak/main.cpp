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
    int t;
    cin >> t;
    while(t--) {
        ll n,k,x;
        cin >>n>>k>>x;
        ll minn=((k+1)*k)/2;
        ll maxx=(n*(n+1))/2;
        ll diff=n - k;
        ll extra=diff*(diff+1)/2;
        ll tmax=maxx-extra;
        if(x < minn || x > tmax) {
            cout << "NO" << endl;
            //
        }
        else{
            cout << "YES" << endl;
            //continue;

        }
    }

    return 0;
}
