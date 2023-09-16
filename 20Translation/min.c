#include<stdio.h>
#include<string.h>
int main(){
    char a[1000];
    gets(a);
    char b[1000];
    gets(b);
    //char c[100];
    //c=strrev(b);
    strrev(b);
    if (strcmp(a,b)==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}