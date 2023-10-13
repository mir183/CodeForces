#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        if(n%2!=0) cout<<(n+1)/2<<endl;
        else cout<<n/2<<endl;
    }
    
    return 0;
}