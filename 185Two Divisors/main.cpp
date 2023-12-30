#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

int main() {
    fasterio;
    // Your code here
    // Always use ll(long long int), int may give TLE
    ll t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll ans = lcm(a, b); // Using the LCM function to find the product of a and b
        cout<< lcm(a*b*2, ans)<<endl; // Using the LCM function to find the product of a*b*2 and ans
    }

    return 0;
}
