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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x;
        ll cnt =1;
        for(ll i=1;i<=n;i++){
            cin>>x;
            if(x==cnt){
                cnt++;
            }
            cnt++;
        }
        cout<<cnt-1<<endl;
    }

    return 0;
}