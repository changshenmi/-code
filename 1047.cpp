//#[NOIP2005 普及组] 校门外的树 
/*思路
长度l的路上有l+1棵数 
我设置数组l{l+1}={1} 
到某个长度上，就赋值为0；
最后查找1的个数就是树的个数了
*/
#include<stdio.h>
int main(){
	//
	bool li[10001]={0};//长度数组
	int l=0;
	int m=0;//区域数目 
	int i=0;
	scanf("%d%d",&l,&m);
	
	for(i=0;i<m;i++)
	{   int k=0;
		int a=0;
		int b=0;
		scanf("%d%d",&a,&b);
		for(k=a;k<=b;k++)
		{
		li[k]=1;
		}
	}
	int ans=0;
	for(i=0;i<=l;i++)
	{
		if(li[i]==1)
		ans++; 
	}
	printf("%d",l+1-ans);
	return 0;
}
/*使用memest给动态数组赋初值？/ 
