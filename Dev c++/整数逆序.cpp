# include<stdio.h>
int main()
{
	int x;
	int ret=0;
	int digit;
	scanf("%d",&x);
	while (x>0){
		digit=x%10;
		x/=10;
		printf("%d",digit);
		//ret=10*ret+digit; 
	}
	//printf("%d",ret);
	return 0;
}
