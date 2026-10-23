#include<stdio.h>
int main(){
	char ac[]={1,2,3,4};
	char *p=ac;
	int ai[]={1,2,3,4};
	int*q=ai;
	double ad[]={1,2,3,4};
	double *r=ad;
	printf("%p\n",r+1);
	printf("%p\n",p+1);
	printf("%p\n",q+1);
	return 0;
}
