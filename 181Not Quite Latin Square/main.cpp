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
    ll t;
    cin >> t;
    while (t--)
    {
        char a[3][3];
        for(ll i=0;i<3;i++){
            for(ll j=0;j<3;j++){
                cin >> a[i][j];
            }
        }
        ll counta=0,countb=0,countc=0;
        for(ll i=0;i<3;i++){
            for(ll j=0;j<3;j++){
                if(a[i][j]=='A') counta++;
                else if(a[i][j]=='B') countb++;
                else if (a[i][j]=='C') countc++;
                else continue;
            }
        }
        if(counta==2)cout << "A" << endl;
        else if(countb==2) cout << "B" << endl;
        else if(countc==2) cout << "C" << endl;
        // else cout << "IMPOSSIBLE" << endl;

    }
    
    return 0;
}