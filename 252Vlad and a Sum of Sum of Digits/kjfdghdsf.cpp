#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const ll N = 2e5+9;
vector<ll> a(N);


void cp(){
    for (int i=1;i<=200001;i++)
    {
        int r = 0;
        int d = i;
        while(d){
            r += d%10;
            d /= 10;
        }
        a[i]=a[i-1]+r;
    }
}

void solve() {
    ll n;
    cin>>n;
    cout<<a[n]<<endl;
}

int main() {
    fasterio;
    cp();
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}