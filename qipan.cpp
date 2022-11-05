#include<stdio.h>
#include<iostream>
using namespace std;



bool qipan[10][10];


void  lu (int a,int b,int x,int y)
{

	if(x==a-2&&y==b-1)
	qipan[a-2][b-1]=1;
	else
	lu(a-2,b-1,x,y);
	
	if(x==a-2&&y==b+1)
	qipan[a-2][b+1]=1;
	else
	lu(a-2,b+1,x,y);
    
    if(x==a-1&&y==b-2)
    qipan[a-1][b-2]=1;
	else
	lu(a-1,b-2,x,y);
	
	if(x==a-1&&y==b+2)
    	qipan[a-1][b+2]=1;
	else
	lu(a-1,b+2,x,y);
	
	if(x==a+2&&y==b-1)
    qipan[a+2][b-1]=1;
	else
	lu(a+2,b-1,x,y);
	
	if(x==a+2&&y==b+1)
    qipan[a+2][b+1]=1;
	else
	lu(a+2,b+1,x,y);
	
	if(x==a+1&&y==b-2)
    qipan[a+1][b-2]=1;
	else
	lu(a+1,b-2,x,y);
	
	if(x==a+1&&y==b+2)
	qipan[a+1][b+2]=1;
	else
	lu(a+1,b+2,x,y);
}
int main(){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	x1=x1+2;
	y1=y1+2;
	x2=x2+2;
	y2=y2+2;
	lu(x2,y2,x1,y1);
	
	
	for(int i=0;i<10;i++)
	for(int j=0;j<10;j++)
	if(qipan[i][j])
	printf("%d%d",i,j);
}


