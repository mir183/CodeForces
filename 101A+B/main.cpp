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

    while(t--){
        string expression;
        cin>>expression;

        int pos = expression.find('+');

        int a=stoi(expression.substr(0,pos));
        int b=stoi(expression.substr(pos+1));

        int result=a+b;
        cout<<result<<endl;
    }
    return 0;
}