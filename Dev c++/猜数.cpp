# include<stdio.h>
# include<stdlib.h>
# include<time.h>
int main()
{ int count=0;
int a;
srand(time(0));
int s=rand();
int x=s%100;
printf("我已生成一个数");
do {printf("你猜的数是：");
scanf("%d",&a);
count+=1;
if (a>x){printf("大了");}
else if(a<x){printf("小了");
}}while(a!=x);
printf("%d次通关",count);
 
return 0;
}

