#include<stdio.h>
#include<math.h>
int zhishu(int x){
	int i;
	
	if(x==1||x==2)
	return 1;

	if(x>2){
	for(i=2;i<x;i++)
	{
	if(x%i==0)
	return 0;
	}
	return 1;	
	}
}



int main()
{
	int n=0;
	scanf("%d",&n);
	if(zhishu(n))
	printf("yes");
	return 0;
	
}
