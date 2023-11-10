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
    cin>>t;
    while (t--){
    string cf="codeforces";
    string s;
    cin>>s;
    int milsena=0;
    for(int i=0;i<=10;i++){
        if(cf[i]!=s[i]){
            milsena++;
        }else{
            continue;
        }
    }
    cout<<milsena<<endl;
        
    }
    
    // string cf="codeforces";
    // string s;
    // cin>>s;
    // int milsena=0;
    // for(int i=0;i<=10;i++){
    //     if(cf[i]!=s[i]){
    //         milsena++;
    //     }else{
    //         continue;
    //     }
    // }
    // cout<<milsena<<endl;

    return 0;
}