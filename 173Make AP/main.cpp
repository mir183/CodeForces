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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        if((a+c)%(2*b) == 0) yes;
        else if((2*b-a)>0 and (2*b-a)%c==0)yes;
        else if((2*b-c)>0 and (2*b-c)%a==0)yes;
        else no;
    }
    return 0;
}