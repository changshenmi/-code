//#[NOIP2005 �ռ���] У������� 
/*˼·
����l��·����l+1���� 
����������l{l+1}={1} 
��ĳ�������ϣ��͸�ֵΪ0��
������1�ĸ����������ĸ�����
*/
#include<stdio.h>
int main(){
	//
	bool li[10001]={0};//��������
	int l=0;
	int m=0;//������Ŀ 
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
/*ʹ��memest����̬���鸳��ֵ��/ 
