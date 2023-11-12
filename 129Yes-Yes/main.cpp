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
    string a="Yes";
    for (int i=0;i<100;i++) {
        a=a+"Yes";
    }
    while(t--){
        string s;
        cin>>s;
        bool ok=false;
        int n=s.size();
        for(int i=0;i<a.size();i++){
            if(i+n-1<a.size() && a.substr(i,n)==s){
                ok=true;
                break;
            }
        }
        if(ok)yes;
        else no;
    }
    return 0;
}
