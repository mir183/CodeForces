#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t>0)
    {
        int n;
        scanf("%d", &n);
        if (n<=45)
        {
            if (n>0 && n<10)
            {
                printf("%d", n);
            }
             else
            {
                for(int i=0;i<9;i++)
                {
                    if(i+9==n){
                        printf("%c%d\n",i,9);
                        break;
                    }
                }
            }
            
        }
        else
        {
            printf("-1\n");
        }
        
     t--;   
    }
    
    
}