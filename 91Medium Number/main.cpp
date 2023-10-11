#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> arr(3);
        for(int i=0;i<3;i++)cin>>arr[i];
        sort(arr.begin(), arr.end());
        arr.pop_back();
        arr.erase(arr.begin());
        for(int i=0;i<1;i++)cout<<arr[i]<<endl;
    }
    
}