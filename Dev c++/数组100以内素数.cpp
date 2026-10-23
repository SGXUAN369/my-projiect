# include<stdio.h>
int main()
{
	int prime[101];
	int m=0;
	for(m=0;m<101;m++){
		prime[m]=1;
	}int x=2;
	for(x=2;x<51;x++){
		if(prime[x]==1)
		{for(int i=2;x*i<=100;i++){
			prime[i*x]=0;
		}
	}}
	for(int n=2;n<101;n++){
		if(prime[n]==1){
			printf("%d\t",n);
		}
	}
	return 0;
}
