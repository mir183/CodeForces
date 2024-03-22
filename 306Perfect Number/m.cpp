#include <iostream>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

ll cal(ll n) {
    ll sum=0;
    while (n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main() {
    fasterio;
    // Your code here
    // Always use ll, int may give TLE
    ll n;
    cin >> n;
    ll ans=0;
    while (n)
    {
        ans++;
        if(cal(ans)==10) n--;
    }
    cout << ans << endl;
    
    return 0;
}