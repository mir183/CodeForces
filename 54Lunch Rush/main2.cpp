#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<long long int> mainarr;
    for (int i=0;i<n;i++) {
        long long int fi,ti;
        cin>>fi>>ti;
        
        long long int joy;
        if (ti>k) {
            joy=fi-(ti-k);
        }
        else{
            joy=fi;
        }
        mainarr.push_back(joy);
    }
    
    long long int maximum=*max_element(mainarr.begin(), mainarr.end());
    
    cout <<maximum<< endl;
    
    return 0;
}
