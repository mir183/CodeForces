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
    // Always use ll(long long int), int may give TLE
    ll n,a,b,c;
    cin>>n;
    ll suma=0,sumb=0,sumc=0;
    for(ll i=0;i<n;i++){
        cin>>a>>b>>c;
        suma+=a;
        sumb+=b;
        sumc+=c;
    }
    if(suma==0 && sumb==0 && sumc==0)
        yes;
    else
        no;
    return 0;
}