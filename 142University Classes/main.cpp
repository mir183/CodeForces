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
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    int maxx=0,cnt=0;
    for(int i=0;i<7;i++){
        for(int j=0;j<n;j++){
            if(s[j][i]=='1'){
                cnt++;
            }
        }
        maxx=max(maxx,cnt);
        cnt=0;
    }
    cout<<maxx<<endl;
    return 0;
}
