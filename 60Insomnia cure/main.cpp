#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int k,l,m,n,d;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    vector<int>hit;
    for(int i=1;i<=d;i++){
        if(i%k==0){
            hit.push_back(i);
        }
        if(i%l==0){
            hit.push_back(i);
        }
        if(i%m==0){
            hit.push_back(i);
        }
        if(i%n==0){
            hit.push_back(i);
        }
    }
    sort(hit.begin(),hit.end());

    
    auto uu=unique(hit.begin(), hit.end());
    hit.erase(uu, hit.end());
    int count = hit.size();
    cout<<count<<endl;

}