#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n%2==0){
            yes;
            for(int i=1;i<=n;i++){
                if(i%2) cout << 1 << " ";
                else cout << -1 << " ";
            }
            cout << endl;
        }
        else{
            if(n==3){
                no;
                continue;
            }
            yes;
            int x = n/2;
            int y=-(x-1);
            for(int i=1;i<=n;i++){
                if(i%2) cout << y << " ";
                else cout << x << " ";
                // if(i==x) y=1;
            }
            cout << endl;
        }
    }
    
    return 0;
}