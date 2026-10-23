# include<stdio.h>
int main()
{
	int count=0;
	int x=2;
while(count<50){
	int i=2;
	int j=1;
	for(i=2;i<x;i++){
		if (x%i==0){
			j=0;
			break;
		}}
		if (j==1){
			printf("%d\  ",x);
			count+=1;}
			x++;
		}
	return 0;
}
