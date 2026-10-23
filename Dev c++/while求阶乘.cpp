# include<stdio.h>
# include<math.h>
int main()
{
	int a;
	scanf("%d",&a);
	int n=a;
	if(a==0){
		n=1;
	}
	if(a==1){
		n==1;
	}
	while(a>1){
		n=n*a*(a-1);
		a-=1;
	}
	n=sqrt(n);
	printf("%d",n);
	return 0;
}
