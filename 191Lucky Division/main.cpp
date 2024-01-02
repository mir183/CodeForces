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
    if(t%4==0 or t%7==0 or t%47==0 or t%74==0 or t%447==0 or t%474==0 or t%477==0 or t%747==0 or t%774==0 or t%777==0){
        yes;
    }else {
        no;
    }
    return 0;
}