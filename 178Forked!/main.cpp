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
        int a,b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        int dx=abs(xk-xq);
        int dy=abs(yk-yq);
        if ((dx % a == 0 && dy % b == 0 && (dx / a) % 2 == (dy / b) % 2) ||
            (dy % a == 0 && dx % b == 0 && (dy / a) % 2 == (dx / b) % 2)) {
            cout << "2" << endl;
        } else if(dx<dy){
            swap(dx, dy);
            if(dx==a && dy==b){
                cout << "1" << endl;
            }
        }
        else{
            cout << "0" << endl;
        }
    }
    return 0;
}