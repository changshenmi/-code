#include<stdio.h>	
bool ma[25][25];
long long step[25][25]={0};
int main(){
	int m,n,x,y;
	m=n=x=y=0;
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&x);
	scanf("%d",&y);

	m++;
	n++;
	x++;
	y++;
	step[1][1]=1;
	ma[x][y]=1;
	ma[x-2][y-1]=1;
	ma[x-2][y+1]=1;
	ma[x+2][y-1]=1;
	ma[x+2][y+1]=1;
	ma[x-1][y+2]=1;
	ma[x-1][y-2]=1;
	ma[x+1][y+2]=1;
	ma[x+1][y-2]=1;
	for(int i=1;i<=m;i++)
	   for(int j=1;j<=n;j++)
		{
	if((i!=1||j!=1)&&!ma[i][j])
	step[i][j]=step[i-1][j]+step[i][j-1];
		}
		
		printf("%lld",step[m][n]);
		return 0;
}
