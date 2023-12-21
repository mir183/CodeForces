#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int digitSum(int n) {
    int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    fasterio;
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        while(true) {
            if(digitSum(x) % k == 0) {
                cout << x << endl;
                break;
            }
            x++;
        }
    }
    
    return 0;
}