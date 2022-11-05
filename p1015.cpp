#include<stdio.h>
#include<string.h>
//判断回文数 
int pan(char str[],int n){
	bool count;
	int left,right;
	left=0;
	right=n-1;
	count=true;
	while(left<=right)
	{
		if(str[left]!=str[right])
		{
		count=false;
		return count;	
		}
		left++;
		right--;}
	return count;
}
//给这个数倒序到另一个数组 
void change(char shu[],char fan[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	fan[i]=shu[n-i-1];;	
	}
}
//交换两个数组 


//两个数按照n进制加法
void  jisuan(char shu[],int t)
{
 void change(char shu[],char fan[],int n);
 int i,j,n;
 n=strlen(shu);
 char fan[100]="0";
 change(shu,fan,n);
 
 char suan[101]="0";
 
 	
 	int count=0;
 for(j=0,i=n-1;i>=0;i--,j++)
  {
  	char ch='0';
  	ch=shu[i]+fan[i]+count-48;
 	 if(ch>t+48)
 	{
 	 ch=ch-t-1;
  	 count=1;
 	}
 	 else
 	{
 	 count=0;
	}
 	suan[j]=ch;
  }	
  
  if(count==1)
  suan[j]=49;
  
  change(suan,shu,strlen(suan)); 
}

 void  jisuan16(char shu[])
{
 void change(char shu[],char fan[],int n);
 
 int i,j,n;
 n=strlen(shu);
 char fan[100]="0";
 change(shu,fan,n);
 
 char suan[101]="0";
 
 	
 	int count=0;
 for(j=0,i=n-1;i>=0;i--,j++)
  {
  	char ch='0';
  	
	int x=0;
  	int y=0;
  	if(shu[i]>64)
  	x=1;
  	if(fan[i]>64)
  	y=1;
  	
	  
 	ch=shu[i]+fan[i]+count-48-7*x-7*y;
 	 if(ch>63)
  	{
  	count=1;
  	ch=ch-16;
	} 

 	 else if(ch>57)
 	{
 	 count=0;
 	 ch=ch+7;
	}
	else
	{
	 count=0;
	 ch=ch;
	}
 	suan[j]=ch;
  }
  
  
  
  if(count==1)
  suan[j]=49;
  
  change(suan,shu,strlen(suan)); 
}

int main(){
	int n;
	int ans=0;
	int i=0;
	char shu[101]="0";

	scanf("%d",&n);
	scanf("%s",shu);
	if(n!=16)
	{
	for(i=0;i<30;i++)
	{
	int p;	
	jisuan(shu,n-1);
	p=pan(shu,strlen(shu));
    	if(p)
    	{
    	ans=i+1;
    	break;
		}
	}
	if(ans)
	printf("STEP=%d",ans);
	else
	printf("Impossible!");
    }
    
    else{
    	for(i=0;i<30;i++)
	{
	int p;	
	jisuan16(shu);
	p=pan(shu,strlen(shu));
    	if(p)
    	{
    	ans=i+1;
    	break;
		}
	}
	if(ans)
	printf("STEP=%d",ans);
	else
	printf("Impossible!");
    	
	} 
    
	return 0;
}

