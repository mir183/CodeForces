#include<iostream>

using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;
    if(k<=n/2) {
        cout <<2*k-1<<endl;//2n - 1 sobsomoy odd
    }
    else{
        k=k-n/2;
        cout<<2*k<<endl;//2n sobsomoy even
    }
}
