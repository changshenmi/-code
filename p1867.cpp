#include<stdio.h>
#include<math.h>
int powl(int x,int y)
{
	int i=0;
	int sum=1;
	if(y==0)
	return 1;
	else
	{
	for(i=0;i<y;i++)
	{
		sum=sum*x;
	}
	return sum;
	}
}





int main(){
	int n=0;
	int i,j;
	float er[21];
	int ex[21];
	float xie=10.0;
	int jingyan=0; 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f",&er[i]);
		scanf("%d",&ex[i]);		
	}
	for(i=0;i<n;i++)
	{
		xie=xie-er[i];
		if(xie>10)
		{
		xie=10;
		}
		if(xie>0.000001)
		{
			jingyan=jingyan+ex[i];
		}
		else
		break;
	}
	int level=0;
	int k=0;
	while((jingyan-powl(2,k))>=0)
	{
		jingyan=jingyan-pow(2,k);
		level++;
		k++;;
	}		
printf("%d %d",level,jingyan);	
	return 0;
}
