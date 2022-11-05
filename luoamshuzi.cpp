#include<stdio.h>
#include<string.h>

int pan(char m){
	if(m=='I')
	return 1;
	if(m=='V')
	return 5;
	if(m=='X')
	return 10;
}

int main(){
	int n=0;
	int i=0;
	int sum=0;
	char str[100]="0";
	char m='Y';
	
	scanf("%d",&n);
	scanf("%s",str);
	
	for(i=0;i<n;i++)
	{
		if(str[i]>m)
		sum=sum+pan(str[i])-2;
		else
		sum=sum+pan(str[i]);
		m=str[i];	
	}
	 
	printf("%d",sum);
}

