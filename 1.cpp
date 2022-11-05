#include<stdio.h>
#include<cctype>
#include<iostream>
using namespace std;
int main()
{
int i=0;
int k=0;
char ch='\0';	
char str[501];

while((ch==getchar())!=64)
{
str[i]=ch;
i++		;
}
str[i]='\0';

printf("%s",str);
return 0;
}
