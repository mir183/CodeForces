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
        string cs ="";
        cs+=s;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                cs.insert(i, "1");
            }
            else if(s[i]!=s[i-1]){
                cs.insert(i,"0");
            }
        }
        int zero=count(cs.begin(),cs.end(),'0');
        int one=count(cs.begin(),cs.end(),'1');

        if(zero>=one){
            yes;
        } 
        else{
            no;
        }
        cout<<cs<<endl;


    }
    

    return 0;
}