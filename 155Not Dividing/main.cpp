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
        vector<int> v(n);
        for(int i = 0; i < n; i++){ 
            cin >> v[i];
            if(v[i]==1){
                v[i]=2;
            }
        }
        for(int i=1;i<n;i++){
            if(v[i]%v[i-1]==0){
                v[i]++;
            }
        }
        for(int i=0;i<n;i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}