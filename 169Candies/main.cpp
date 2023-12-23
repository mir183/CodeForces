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
        int r;
        cin >> r;
        int i = 2;
        while(true){
            int x=pow(2,i) - 1;
            if(r%x==0){
                cout<<r/x<<endl;
                break;
            }
            i++;
        }
    }
    
    return 0;
}