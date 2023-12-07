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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for(int i=1;i<=n;i=i*10+1){
            for(int j=1;j<=9;j++){
                if(i*j<=n) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
