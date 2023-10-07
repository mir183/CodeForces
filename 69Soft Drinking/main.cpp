#include<iostream>

using namespace std;

int main(){
    int  n, k, l, c, d, p, nl, np;
    cin>> n>>k>>l>>c>>d>>p>>nl>>np;
    int tdrink=k*l;
    tdrink=tdrink/nl;//each friend needs nl milliliters of the drink,
    int tslice=c*d;//c limes and cut each of them into d slices.
    int tsalt=p/np;//p grams of salt*np grams of salt.
    int drink = min(min(tdrink, tslice), tsalt);
    int ff=drink/n;
    cout<<ff<<endl;

}