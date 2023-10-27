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
    int arr[n];
    // int p=0;
    // int math=0;
    // int pe=0;
    vector<int>pv;
    vector<int>mathv;
    vector<int>pev;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]==1){//p++;
        pv.push_back(i+1);
        }
        else if(arr[i]==2){//math++;
        mathv.push_back(i+1);
        }
        else if(arr[i]==3){//pe++;
        pev.push_back(i+1);
        }
    }
    // int ans=min(p,math);
    // int fianlans=min(ans,pe);
    int teams = min({pv.size(), mathv.size(), pev.size()});
    cout<< teams << endl;
    for(int i=0;i<teams;i++){
        cout<<pv[i]<<" "<<mathv[i]<<" "<<pev[i]<<endl;
    }

    
    return 0;
}