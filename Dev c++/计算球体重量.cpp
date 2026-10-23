# include<stdio.h>
int main()
{
	int d1;
	int d2;
	double PI=3.1415926;
	scanf("%d %d",&d1,&d2);
	double G1=4.0/3.0*PI*d1*d1*d1/8000*7.86;
	double G2=4.0/3.0*PI*d2*d2*d2/8000*19.3;
	printf("%.3f %.3f",G1,G2);
	return 0;
}
