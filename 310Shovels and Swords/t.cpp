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
    ll t;cin>>t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<min(min(a,b),(a+b)/3)<<endl;
    }
    
    return 0;
}