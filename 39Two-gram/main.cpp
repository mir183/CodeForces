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
    string s;
    cin>>s;
    int count=0;
    int result=0;
    string ans;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(s[i]==s[j] and s[i+1]==s[j+1]){
                count++;
                if(result<count){
                    result=count;
                    ans=string(1,s[i])+string(1,s[i+1]);
                }
            }

        }
    }
    cout<<ans<<endl;
    return 0;
}