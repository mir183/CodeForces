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
        string s;
        cin>>s;
        bool ok=false;
        int zero=0,one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')zero++;
            else one++;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                ok =true;
                break;
            }
        }
        if(zero>=one or ok){
            yes;
        }
        else no;
    }
    
    

    return 0;
}