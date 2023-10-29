#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl


void solve(){
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    bool flag=true;

    for(int i=0;i<m-1;i++){
        if(t[i]==t[i+1]){
            flag=false;
            break;
        }
    }
    if(t[0]!=t[m-1]){
        flag=false;
    }

    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            if(!flag ||s[i]==t[0]){
                no;
                return;
            }
        }
    }
    yes;

}


int main() {
    int x;
    cin>>x;
    while (x--)
    {
        solve();
    


    }
    
    
    return 0;
}