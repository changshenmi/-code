#include<stdio.h>
int main(){
	int k=0;
	int n=0;
	scanf("%d",&k);
	int i=1;
	double sum=0;//¾«¶È 
	while(sum<=k)
	{
		sum=sum+1.0/i;
		i++;
	}
	printf("%d",i-1);
	return 0;
}
