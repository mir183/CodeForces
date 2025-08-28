#include<cstdio> // from w23c3c3
int n,m,k,i,j,a[1001][1001],u,v,x;
int main(){
	scanf("%d%d%d",&n,&m,&k);
	for(i=1;i<=n;i++)for(j=1;j<=m;j++)scanf("%d",&a[i][j]);
	while(k--){
		scanf("%d",&v);u=1;
		while(u<=n){
			x=a[u][v];a[u][v]=2;
			if(x==1)v++;
			if(x==2)u++;
			if(x==3)v--;
		}
		printf("%d ",v);
	}
}