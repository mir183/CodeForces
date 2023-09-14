#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char c[1002];
    scanf("%s", &c);
    if(islower(c[0])){
        c[0]=toupper(c[0]);
        printf("%s", c);
    }
    else{
        printf("%s", c);
    }
}