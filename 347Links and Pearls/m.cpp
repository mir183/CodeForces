#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int fita=0, mukta=0;
    for(int i=0; i<n; i++) {
        if(s[i]=='-') fita++;
        else mukta++;
    }
    if(mukta==1){
        cout<<"YES"<<endl;
    }else{
        if(fita==0) cout<<"YES"<<endl;
        else{
            if(mukta==0) {
                cout<<"YES"<<endl;
            } else {
                int ans=fita%mukta;
                if(ans==0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}