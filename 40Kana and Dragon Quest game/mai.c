//kana is cute uwu
#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t>0){
        int x,n,m;
        scanf("%d %d %d",&x,&n,&m);
        while (n>0 && x>20){
            x=(x/2)+10;
            n--;
        }
        while(m>0 && x>0) {
        x-=10;
        m--;
}

        //printf("SUM=%lf", sum);
        if(x<=0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

        t--;
    }
}