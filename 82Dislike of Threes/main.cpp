#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--) {
        int k;
        cin>>k;
        vector<int> arr;
        int num=1;
        while (arr.size()<k){
            if (num%3!=0 && num%10!=3) {
                arr.push_back(num);
            }
            num++;
        }
        cout<<arr.back()<<endl;
    }
    
    return 0;
}
