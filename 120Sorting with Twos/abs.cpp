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
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        bool ok=true;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i]){
                if(i!=1 && i!=2 && i!=4 && i!=8 && i!=16){
                    ok=false;
                }
            }
        }
        if(ok){yes;}
        else {no;}
    }
    

}