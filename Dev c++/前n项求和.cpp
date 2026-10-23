# include<stdio.h>
int main()
{
	int i=1;
	int n;
	scanf("%d",&n);
	double sum=0.0;
	for(i=1;i<=n;i++){
		sum+=1.0/i;
	}
	printf("%f",sum);
	return 0;
}
