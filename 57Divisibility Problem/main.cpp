#include<iostream>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t>0){
        int count=0;
        int a,b;
        cin>>a>>b;

        int mod=a%b;
        if(mod==0){
            count=count;
        }else{
            count=b-mod;
        }



        cout<<count<<endl;
        t--;
    }
}