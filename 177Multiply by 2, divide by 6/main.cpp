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
        ll n;
        cin >> n;
        ll two=0;
        ll three=0;
        while(n%2==0)
        {
            n/=2;
            two++;
        }
        while(n%3==0)
        {
            n/=3;
            three++;
        }
        if(n==1 && two<=three)
        {
            cout << 2*three-two << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}