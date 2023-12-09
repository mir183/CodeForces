#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void SF() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];

    ll sum = 0;
    ll cnt = 0;

    for (auto i:v) {
            sum+=i;
            if(i==1){
                cnt++;
            
            }
        }
        sum=sum-n;  

    if (sum >= cnt and n>1) {
        yes;
    } else {
        no;
    }
}

int main() {
    fasterio;
    int t;
    cin >> t;
    while (t--)
    {
        SF();
    }
}