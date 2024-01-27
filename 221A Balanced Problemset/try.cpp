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
    cin >> t;
    while (t--)
    {
    ll n,x;
    cin >> n >> x;
    ll result = 0;
    ll count=1;
    while (n-count*x>= 0) {
        if ((n-count*x)%count==0) {
            result=count;
        }
        count++;
    }

    cout << result << endl;
    }
    
    return 0;
}