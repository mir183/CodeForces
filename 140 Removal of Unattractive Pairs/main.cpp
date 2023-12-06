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
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;
        for (int i=0; i<s.size();i++) {
            if(!st.empty() && s[i]!=st.top()){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        cout<<st.size()<<endl;
    }

    return 0;
}
