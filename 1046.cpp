#include<stdio.h>
int pan(int x,int y){
	if(x>y)
	return 1;
	else
	return 0;
}




int main(){
	int i=0;
	int n=0;
	int ans=10;
	int hight[10]={0};
	for(i=0;i<10;i++)
	scanf("%d",&hight[i]);
	
	scanf("%d",&n);
	int b=n+30;
	
	for(i=0;i<10;i++)
{
	if(pan(hight[i],b))
	ans--;
}
	printf("%d",ans);
	return 0;
}
