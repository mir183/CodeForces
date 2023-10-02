#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d", &r, &c);
    int flag=0;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i%4==0){
                if(j==c){
                    printf("#");
                }
                else{
                    printf(".");
                }
                
            }
            else if(i%4==2){
                if(j==1){
                    printf("#");
                    }
                else
                    {
                    printf(".");
                    }
                
                
            }
            else{
                printf("#");
            }
            

            

        }
    printf("\n");
    }
}