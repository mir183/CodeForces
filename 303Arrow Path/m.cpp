#include <iostream>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    ll n;
    cin>>n;
    string s[2];
    cin>>s[0]>>s[1];
    bool ok;
    if(s[1][n-2]=='<'){
        no;
        return;
    }
    ll x,y;
    x=1;
    y=n-2;
    while(y>0){
        if(s[(x+1)%2][y-1]=='>'){
            ok=true;
            x=(x+1)%2;
            y--;
        }else if(y>=2 and s[x][y-2]=='>'){
            y-=2;
        }else{
            no;
            return;
        }
    }
    yes;
}

int main() {
    fasterio;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}