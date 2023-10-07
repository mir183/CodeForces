#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int dp=min(a,b);
    int sp;
    if(a>dp){
        a=a-dp;
        sp=a/2;
    }
    else if (b>dp){
        b=b-dp;
        sp=b/2;
    }
    if(a!=b){
        cout<<dp<<" "<<sp;
    }
    else if(a==b){
        cout<<a<<" "<<0;
    }

}