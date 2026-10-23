# include<stdio.h>
int main()
{
int fact=1; 
int i;
int n;
scanf("%d",&n);
for(i=1;i<=n;i+=1){
	fact*=i;
}
printf("%d",fact);
return 0;
}
