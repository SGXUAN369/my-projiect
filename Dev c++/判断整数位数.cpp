# include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int n=0;
	while (x>0){
		n+=1; 
		x/=10;
	}
	printf("%d",n);
	return 0;
	
}
