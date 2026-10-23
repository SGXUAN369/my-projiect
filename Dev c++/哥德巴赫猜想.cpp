# include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=2;
	int j=2;
	for(i=2;i<n;i++){
	int isprime=1;
	for (j=2;j<i;j++){
		if(i%j==0){
			isprime=0;
			break;
		}
	}
	if(isprime==1){	
	int k=n-i;
	int m=2;
	int prime=1;
		for(m=2;m<k;m++){
			if(k%m==0){
				prime=0;
				break;
			}
		}
		if(prime==1){
			printf("%d %d",i,k);
			break;
		}
	}
	}
	return 0;
}
