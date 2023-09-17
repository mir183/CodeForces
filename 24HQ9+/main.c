#include<stdio.h>
int main(){
    char s[100];
    gets(s);
    int flag=0;
    for(int i=0;i<100;i++){
        if(s[i]== 'H'|| s[i]=='Q' || s[i]=='9'){
        flag=1;
    }
    else{
        flag=flag;
    }

    }
    if(flag>=1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
}