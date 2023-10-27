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
    while (t--)
    {
        // int a,b,c,d;
        // cin>>a>>b>>c>>d;
        // int maxab=max(a,b);
        // int minab=min(a,b);
        // int maxcd=max(c,d);
        // int mincd=min(c,d);
        // if(minab>maxcd||mincd>maxab){no;}
        // else {yes;}
        int arr[4];
        for(int i=0;i<4;i++)cin>>arr[i];
        int max1=max(arr[0],arr[1]);
        int max2=max(arr[2],arr[3]);
        sort(arr,arr+4);
        if((max1==arr[2]||max1==arr[3]) and(max2==arr[2]||max2==arr[3])) yes;
        else no;
    }
    
    return 0;
}