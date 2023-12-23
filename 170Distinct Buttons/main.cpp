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
    while (t--) {
        int n;
        cin >> n;
        bool ok=false;
        int u=0,d=0,l=0,r=0;
        for (int i=0;i<n;i++) {
            int x,y;
            cin>>x>>y;
            if(x>0)r++;
            if(x<0)l++;
            if(y>0)u++;
            if(y<0)d++;
        }
        if (u == 0 || d == 0 || l == 0 || r == 0) {
            ok = true;
        }
        if (ok) yes;
        else no;
    }

    return 0;
}
