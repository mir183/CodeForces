#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s[1000];
    gets(s);
    int u=0,l=0;
    int lens=strlen(s);
    for(int i=0;i<lens;i++){
        if(isupper(s[i])){
            u++;
        }
        else{
            l++;
        }
    }
    if(u>l){
        strupr(s);
    }
    else if(u<l){
        strlwr(s);
    }
    else if(u==l){
        strlwr(s);
    }
    printf("%s", s);
}