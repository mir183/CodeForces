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
        int a,b,c;
        cin>>a>>b>>c;
        int minimum=min(a,min(b,c));
        bool ok=true;
        if(a%minimum!=0 and b%minimum!=0 and c%minimum!=0){
            ok=false;
        }
        int count=0;
        while (a!=minimum)
        {
            if(count>3 or a%minimum!=0){
                ok=false;
                break;
            }
                a=a-minimum;
                count++;
            
        }
        while (b!=minimum)
        {
            if(count>3 or b%minimum!=0){
                ok=false;
                break;
            }
                b=b-minimum;
                count++;
            
        }
        while (c!=minimum)
        {
            if(count>3 or c%minimum!=0){
                ok=false;
                break;
            }
                c=c-minimum;
                count++;
            
        }
        if(count<=3 and ok)yes;
        else no;
        
    }
    
    return 0;
}