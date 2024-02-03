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
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        n=n/2;
        ll sum=0;
        for(ll i=0;i<=n;i++)sum+=pow(i,2)*8;
        cout<<sum<<endl;
    }

    return 0;
}