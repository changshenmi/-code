#include<stdio.h>
int main()
{
	int x=0;
	int sum=0;
	for(x=0;x<101;x++){
		if((x%3==0||x%5==0)&&(x%15!=0))
		sum=sum+x;
	}
	printf("%d",sum);
}

