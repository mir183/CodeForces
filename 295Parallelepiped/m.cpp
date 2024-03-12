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
        ll a,b,c;
        cin>>a>>b>>c;
        ll x,y,z;
        x=sqrt((a*b)/c);
        y=sqrt((a*c)/b);
        z=sqrt((b*c)/a);
        cout<<4*(x+y+z)<<endl;
    
    return 0;
}