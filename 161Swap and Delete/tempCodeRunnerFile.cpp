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
        string s;
        cin >> s;
        int n = s.size();
        if(n==1){
            cout<<1<<endl;
        }else if(n==2){
            cout<<0<<endl;
        }
        else{
            int cnt=0;
            for(int i=1;i<n;i++){
                if(s[i]!=s[i-1]){
                    //erase s[i] and s[i-1]th element
                    swap(s[i],s[i-1]);
                    i++;
                }
                else if (s[i]==s[i-1]){
                    cnt++;
                    s.erase(i,1);
                }
            }
            cout<<cnt<<endl;
        }

    }
    
    return 0;
}