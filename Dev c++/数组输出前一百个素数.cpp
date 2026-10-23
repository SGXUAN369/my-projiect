# include<stdio.h>
int isprime(int x,int number[],int cnt);
int main()
{	int number[100]={2};
	int x=3;
	int cnt=1;
	int i;
	while(cnt<100){
		if(isprime(x,number,cnt)){
			number[cnt++]=x;
		}x++;
	}for(i=0;i<cnt;i++){
		printf("%d\t",number[i]);
	}
	return 0;
}
int isprime(int x,int number[],int cnt){
	int ret=1;
	int i;
	for(i=0;i<cnt;i++){
		if (x%number[i]==0){
			ret=0;
			break;
		}
	}return ret;
}
