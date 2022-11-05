/*p1008
三连击
9个数，不重复，组合成三组，比例1：2：3；
顺次排序，由大到小
idea 思路不好思路
查看题解，如果已经知道这些不同的数，
多重循环 
*/
#include<stdio.h>
#include<stdio.h>
#include<string.h>
int a[10];
int main(){
    for (int x=123;x<=329;x++){     //枚举
        int i=x,j=x*2,k=x*3;
        int o=i,p=j,q=k;
        int flag=0;                         //清零
        memset(a,0,sizeof(a));
        while(i>0){                        //取数
            a[i%10]++;
            i/=10;
        }
        if(flag==1) continue;
        while(j>0){
            a[j%10]++;
            j/=10;
        }
        while(k>0){
            a[k%10]++;
            k/=10;
        }
        for (int w=1;w<=9;w++){  //判断
            if(a[w]!=1) flag=1;
        }
        if(flag==0) printf("%d %d %d\n",o,p,q);  //输出
    }
    return 0;
}
